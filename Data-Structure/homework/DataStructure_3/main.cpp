#include <iostream>             //iostream 라이브러리 기능 사용 가능
using namespace std;            //iostream 라이버러리 기능 사용 시 std:: 생략 가능

#include "DLinkedList.h"        //DLinkedList.h 헤더파일의 기능 사용 가능
#include "ArrayVector.h"        //ArrayVector.h 헤더파일의 기능 사용 가능

void run_arrayvector();         //run_arrayvector 함수 prototype
void run_doublylinkedlist();    //run_doublylinkedlist 함수 prototype

int main() {                    //main함수
    //(1)
    cout << "(1) ArrayVector 정상 동작" << endl;        //출력문 출력
    run_arrayvector();                                  //run_arrayvector 함수 실행
    cout << endl;                                       //줄바꿈 출력

    //(2)
    cout << "(2) Doubly Linked List 정상 동작" << endl; //출력문 출력
    run_doublylinkedlist();                             //run_doublylinkedlist 함수 실행
    cout << endl;                                       //줄바꿈 출력

    cout << "\n성시열 12180626";    //이름 학번 출력
    return 0;                       //main함수의 return값이 int 이므로 0 반환.
}

//(1)
void run_arrayvector() {        //run_arrayvector 함수 정의
    ArrayVector arrvec(3);      //ArrayVector 클래스를 통해 arrvec이라는 객체 생성, 정수 3을 생성자의 len으로 넘김.
                                                                                
    for (int i = 0; i < 10; i++) {                                              //인덱스 [0] ~ [9]까지
        cout << "arrvec[" << i << "] =  " << i+1 << " 삽입" << endl;      //출력문 출력
        arrvec.insert(i, i+1);                                                  //i와 i+1을 arrvec객체의 insert 멤버함수로 넘겨줌.
        cout << "삽입 후 배열 출력 : " << endl;     //출력문 출력
        arrvec.showvector();                        //arrvec객체의 showvector 멤버함수 실행.
        cout << endl;                               //줄바꿈 출력
    }
}
//(2)
void run_doublylinkedlist() {   //run_doublylinkedlist 함수 정의
    DLinkedList DLL;            //DLinkedList 클래스를 통해 DLL이라는 객체 생성,

    cout << endl << "list 앞에 1 2 3 4 5 삽입" << endl;                     //출력문 출력
    for (int i = 5; i >= 1; i--) {                                          //5부터 1까지
        DLL.addFront(i);                                                    //DLL객체의 addFront함수에 i를 넘겨주면서 호출함.
        cout << "앞 : " << DLL.front() << " / 뒤 : " << DLL.back() << endl; //출력문 출력, DLL객체의 front함수와 back함수를 호출
    }

    cout << endl << "list 뒤에 6 7 8 9 10 삽입" << endl;                        //출력문 출력
    for (int i = 6; i <= 10; i++) {                                             //6부터 10까지
        DLL.addBack(i);                                                         //DLL객체의 addBack함수에 i를 넘겨주면서 호출함.
        cout << "앞 : " << DLL.front() << " / 뒤 : " << DLL.back() << endl;     //출력문 출력, DLL객체의 front함수와 back함수를 호출
    }

    cout << endl << "list 앞에 3개 제거" << endl;                               //출력문 출력
    for (int i = 0; i < 3; i++) {                                               //0부터 2까지(3번)
        DLL.removeFront();                                                      //DLL객체의 removeFront함수를 호출함
        cout << "앞 : " << DLL.front() << " / 뒤 : " << DLL.back() << endl;     //출력문 출력, DLL객체의 front함수와 back함수를 호출
    }

    cout << endl << "list 뒤에 3개 제거" << endl;                               //출력문 출력
    for (int i = 0; i < 3; i++) {                                               //0부터 2까지(3번)
        DLL.removeBack();                                                       //DLL객체의 removeBack함수를 호출함
        cout << "앞 : " << DLL.front() << " / 뒤 : " << DLL.back() << endl;     //출력문 출력, DLL객체의 front함수와 back함수를 호출
    }
}