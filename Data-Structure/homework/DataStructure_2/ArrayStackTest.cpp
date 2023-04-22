#include <iostream>     //iostream 라이브러리 포함
using namespace std;    //iostream 라이브러리의 모든 기능을 std:: 안 붙이고 사용 가능.

#include "ArrayStack.h" //ArrayStack.h의 기능 사용 가능.

int main() {            //main함수 실행, return type : int

    try {   //예외에 대한 검사 범위를 지정
        cout << "Stack" << endl;    //size(), push(), pop(), top()이 정상작동 함을 보이는 코드

        int stackSize = 3;                  //정수형 변수 stackSize를 생성하고 3으로 초기화
        ArrayStack<int> mystack(stackSize); //stack의 크기가 3인 mystack3을 만들어줌

        cout << "저장공간 = " << stackSize << endl;         // 스택의 저장공간을 출력해줌

        cout << "크기 : " << mystack.size() << endl;        //size()실행, stack에 차지하고 있는 공간(0) return.

        mystack.push(1);                                    //push()실행, stack의 가장 위에 1이라는 값을 넣어줌.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() 실행, stack의 가장 위에 저장된 값을 return.  
            << "크기 : " << mystack.size() << endl;         //size()실행, stack에 차지하고 있는 공간(1) return.

        mystack.push(2);                                    //push()실행, stack의 가장 위에 2이라는 값을 넣어줌.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() 실행, stack의 가장 위에 저장된 값을 return.
            << "크기 : " << mystack.size() << endl;         //size()실행, stack에 차지하고 있는 공간(2) return.

        mystack.pop();                                      //pop()실행, stack의 가장 위에 값을 제거함.
        cout << "(pop)\ntop : " << mystack.top() << endl    //top()실행, stack의 가장 위에 저장된 값인 1 return.
            << "크기 : " << mystack.size() << endl;         //size()실행, 가장 위의 값이 제거됐으므로 차지하고 있는 공간은 1

        mystack.push(4);                                    //push()실행, stack의 가장 위에 4이라는 값을 넣어줌.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() 실행, stack의 가장 위에 저장된 값을 return.
            << "크기 : " << mystack.size() << endl;         //size()실행, stack에 차지하고 있는 공간(2) return.

        mystack.push(5);                                    //push()실행, stack의 가장 위에 5이라는 값을 넣어줌.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() 실행, stack의 가장 위에 저장된 값을 return.
            << "크기 : " << mystack.size() << endl;         //size()실행, stack에 차지하고 있는 공간(3) return.

    }
    //예외가 없었으므로 catch 문은 실행하지 않음.
    catch (const StackEmptyException& e) {                          //빈 공간일 때 실행할 catch
        cout << "StackEmptyException is occurred: " << e << endl;   // 해당 문구를 출력하고 StackEmptyException에서 받아온 e 를 출력
    }
    catch (const StackFullException& e) {                           //가득 찼을 때 실행할 catch
        cout << "StackFullException is occurred: " << e << endl;    // 해당 문구를 출력하고 StackFullException에서 받아온 e 를 출력
    }
    cout << endl;
   
    try {   //예외에 대한 검사 범위를 지정
        cout << "Stack 1 for StackFullException" << endl;   //stack이 full인 상태에서 push를 할 때, stackFullException이 발생함을 보이는 코드

        int stackSize = 3;                                  //정수형 변수 stackSize를 생성하고 3으로 초기화
        ArrayStack<int> mystack1(stackSize);                //stack의 크기가 3인 mystack1을 만들어줌 //*stackfullexception을 보기 위한 mystack1생성

        cout << "저장공간 = " << stackSize << endl;         //스택의 저장공간을 출력

        cout << "크기 : " << mystack1.size() << endl;       //size()실행, stack에 차지하고 있는 공간(0) return.

        mystack1.push(1);                                   //stack의 맨 위에 1 입력
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack의 가장 위의 값 출력
            << "크기 : " << mystack1.size() << endl;        //stack의 크기 출력, 값이 한개 들어갔으므로 크기 1

        mystack1.push(2);                                   //stack의 맨 위에 2 입력
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack의 가장 위의 값 출력
            << "크기 : " << mystack1.size() << endl;        //stack의 크기 출력, 값이 한개 들어갔으므로 크기 2

        mystack1.push(3);                                   //stack의 맨 위에 3 입력
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack의 가장 위의 값 출력
            << "크기 : " << mystack1.size() << endl;        //stack의 크기 출력, 값이 한개 들어갔으므로 크기 3

        mystack1.push(4);                                   //stack의 맨 위에 4 입력, 저장공간의 크기가 3이므로 push에서 예외가 발생함, 아래의 catch문 실행
        cout << "top : " << mystack1.top() << endl 
            << "크기 : " << mystack1.size() << endl;
    }
    catch (const StackEmptyException& e) {                       //빈 공간일 때 실행할 catch
        cout << "StackEmptyException is occurred: " << e << endl;// 해당 문구를 출력하고 StackEmptyException에서 받아온 e 를 출력
    }
    catch (const StackFullException& e) {                        //가득 찼을 때 실행할 catch
        cout << "StackFullException is occurred: " << e << endl; // 해당 문구를 출력하고 StackFullException에서 받아온 e 를 출력
    }
    cout << endl;

    try {   //예외에 대한 검사 범위를 지정
        cout << "Stack 2 for StackEmptyException" << endl;  //stack이  empty인 상태에서 push를 할 때, stackFullException이 발생함을 보이는 코드

        int stackSize = 3;                                  //정수형 변수 stackSize를 생성하고 3으로 초기화
        ArrayStack<int> mystack2(stackSize);                //stack의 크기가 3인 mystack1을 만들어줌 //*stackfullexception을 보기 위한 mystack1생성

        cout << "저장공간 = " << stackSize << endl;         //스택의 저장공간을 출력

        cout << "크기 : " << mystack2.size() << endl;       //size()실행, stack에 차지하고 있는 공간(0) return.

        mystack2.push(1);                                   //stack의 맨 위에 1 입력
        cout << "(push)\ntop : " << mystack2.top() << endl  //stack의 가장 위의 값 출력
            << "크기 : " << mystack2.size() << endl;        //stack의 크기 출력, 값이 한개 들어갔으므로 크기 1

        mystack2.push(2);                                   //stack의 맨 위에 2 입력
        cout << "(push)\ntop : " << mystack2.top() << endl  //stack의 가장 위의 값 출력
            << "크기 : " << mystack2.size() << endl;        //stack의 크기 출력, 값이 한개 들어갔으므로 크기 2        

        // 2개의 값을 넣은 뒤 3개의 값 제거시도
        mystack2.pop();                                     //stack의 맨 위의 값 제거
        cout << "(pop)\ntop : " << mystack2.top() << endl   //가장 위의 값 1
            << "크기 : " << mystack2.size() << endl;        //stack의 크기 1

        mystack2.pop();                                     //stack의 맨 위의 값 제거
        cout << "(pop)\ntop : " << mystack2.top() << endl   //남아있는게 없으므로 pop에서 예외가 발생함, 아래의 catch문 실행
            << "크기 : " << mystack2.size() << endl;
    }
    catch (const StackEmptyException& e) {                          //빈 공간일 때 실행할 catch
        cout << "StackEmptyException is occurred: " << e << endl;   // 해당 문구를 출력하고 StackEmptyException에서 받아온 e 를 출력
    }
    catch (const StackFullException& e) {                           //가득 찼을 때 실행할 catch
        cout << "StackFullException is occurred: " << e << endl;    // 해당 문구를 출력하고 StackFullException에서 받아온 e 를 출력
    }
    cout << endl;
    cout << "12180626 성시열";
    return 0;   //main()의 반환형이 int였으므로 0을 반환함.
}