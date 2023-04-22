#pragma once            //헤더파일 중복정의를 방지함.

#include <iostream>     //iostream 라이브러리 포함
#include <string>       //string 라이브러리 포함

using namespace std;    //위 라이브러리의 모든 기능을 std::를 붙이지 않고 사용 가능

/////런타임에서 발생하는 예외/////
class RuntimeException {        //RuntimeException 클래스 생성
private:
    string errorMsg;            //문자열형태의 errorMsg.

public:
    RuntimeException(const string& err) //RuntimeExceptiong의 생성자 
        : errorMsg(err) {               //Member initializer을 통해 값을 초기화 
    }
    string getMessage() const {         //private 변수의 errorMsg를 reading 하기 위해 get함수 사용 함수 전체 const
        return errorMsg;                //private의 문자열 errorMsg를 return함.
    }
};

inline ostream& operator << (ostream& out, const RuntimeException& e) {   // << 연산자 오버로딩, inline 사용
    return out << e.getMessage();                                         // << 기호를 활용하여 private의 값인 errorMsg를 return해주는 getMessage함수 출력.
}

class StackEmptyException : public RuntimeException {   //RuntimeException을 상속받는 StackEmptyException 클래스 생성
public:
    StackEmptyException(const string& err)              //생성자
        : RuntimeException(err) {                       //Member initializer, 생성할 때 넘겨받은 err 문자열을 RuntimeException의 생성자 parameter로 넘겨줌.
    }
};

class StackFullException : public RuntimeException {   //RuntimeException을 상속받는 StackFullException 클래스 생성
public:
    StackFullException(const string& err)               //생성자
        : RuntimeException(err) {                       //Member initializer, 생성할 때 넘겨받은 err 문자열을 RuntimeException의 생성자 parameter로 넘겨줌.
    }
};

///// stack 구문 //////
template <typename E>   //template을 사용, E에 따라 data type이 바뀜. 
class ArrayStack {      //ArrayStack 클래스 생성
    enum { DEF_CAPACITY = 100 };    //해당 scope에서 DEF_CARACITY는 문자이지만 100이라는 정수로 활용됨.

private:
    E* S;               //stack 안에 값을 담을 공간
    int capacity;       //stack의 크기
    int t;              //stack의 가장 위 공간(top)의 위치

public:
    ArrayStack(int cap= DEF_CAPACITY )          //default 생성자, 기본 값으로 cap = 100;
        :S(new E[cap]), capacity(cap), t(-1) {  //Member initializer
                                                //입력받은 cap만큼 배열 S를 동적할당함, datatype에 따라 E가 달라짐. capacity를 Arraystack을 생성할 때 받은 값 cap으로 초기화, t는 -1로 초기화 
    }

    ~ArrayStack() {         //소멸자
        delete[] S;         //생성자에서 new를 활용해 S라는 배열을 동적할당 했기 때문에 동적할당한 배열 S을 소멸시킴.
    }

    int size() const {      //size함수 정의
        return (t + 1);     //t에 1을 더한 값을 return
    }

    bool empty() const {    //empty함수 정의
        return (t < 0);     //t가 음수면 stack이 비어있음. 조건에 맞다면 true 반환
    }

    const E& top() const throw(StackEmptyException) {           //top함수 정의 
        if (empty())                                            //조건문 if(만약 empty의 반환값이 true라면)
            throw StackEmptyException("Top of empty stack");    //가장 위의 값이 없어 출력을 못하므로 StackEmptyException에 해당 문장을 넘김.
        return S[t];                                            //그렇지 않으면 배열 S의 t번째 값(가장 위의 값)을 반환함.
    }

    void push(const E& e) throw(StackFullException) {           //push함수 정의, 넘겨받은 값을 e로 사용.
                                                                //const를 통해 parameter의 값을 수정할 수 없음을 알 수 있다. 
        if (size() == capacity)                                 //size함수에서 반환된 값이 stack의 크기와 같다면(stack이 꽉 찼다면)
            throw StackFullException("Push to full stack");     //push를 통해 추가할 수 없으므로 StackFullException에 해당 문장을 넘김
        S[++t] = e;                                             //그렇지 않으면 S의 가장 위의 값의 다음 칸에 e를 할당.
    }

    void pop() throw(StackEmptyException) {                     //pop함수 정의  
        if (empty())                                            //조건문 if(만약 empty의 반환값이 true라면)
            throw StackEmptyException("Pop from empty stack");  //비어있기 때문에 제거할 대상이 없으므로 StackEmptyException에 해당 문장을 넘김.
        --t;                                                    //그렇지 않으면 가장 위의 공간을 하나 빼줌
    }
};