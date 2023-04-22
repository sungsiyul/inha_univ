#include <iostream>             //iostream ���̺귯�� ��� ��� ����
using namespace std;            //iostream ���̹����� ��� ��� �� std:: ���� ����

#include "DLinkedList.h"        //DLinkedList.h ��������� ��� ��� ����
#include "ArrayVector.h"        //ArrayVector.h ��������� ��� ��� ����

void run_arrayvector();         //run_arrayvector �Լ� prototype
void run_doublylinkedlist();    //run_doublylinkedlist �Լ� prototype

int main() {                    //main�Լ�
    //(1)
    cout << "(1) ArrayVector ���� ����" << endl;        //��¹� ���
    run_arrayvector();                                  //run_arrayvector �Լ� ����
    cout << endl;                                       //�ٹٲ� ���

    //(2)
    cout << "(2) Doubly Linked List ���� ����" << endl; //��¹� ���
    run_doublylinkedlist();                             //run_doublylinkedlist �Լ� ����
    cout << endl;                                       //�ٹٲ� ���

    cout << "\n���ÿ� 12180626";    //�̸� �й� ���
    return 0;                       //main�Լ��� return���� int �̹Ƿ� 0 ��ȯ.
}

//(1)
void run_arrayvector() {        //run_arrayvector �Լ� ����
    ArrayVector arrvec(3);      //ArrayVector Ŭ������ ���� arrvec�̶�� ��ü ����, ���� 3�� �������� len���� �ѱ�.
                                                                                
    for (int i = 0; i < 10; i++) {                                              //�ε��� [0] ~ [9]����
        cout << "arrvec[" << i << "] =  " << i+1 << " ����" << endl;      //��¹� ���
        arrvec.insert(i, i+1);                                                  //i�� i+1�� arrvec��ü�� insert ����Լ��� �Ѱ���.
        cout << "���� �� �迭 ��� : " << endl;     //��¹� ���
        arrvec.showvector();                        //arrvec��ü�� showvector ����Լ� ����.
        cout << endl;                               //�ٹٲ� ���
    }
}
//(2)
void run_doublylinkedlist() {   //run_doublylinkedlist �Լ� ����
    DLinkedList DLL;            //DLinkedList Ŭ������ ���� DLL�̶�� ��ü ����,

    cout << endl << "list �տ� 1 2 3 4 5 ����" << endl;                     //��¹� ���
    for (int i = 5; i >= 1; i--) {                                          //5���� 1����
        DLL.addFront(i);                                                    //DLL��ü�� addFront�Լ��� i�� �Ѱ��ָ鼭 ȣ����.
        cout << "�� : " << DLL.front() << " / �� : " << DLL.back() << endl; //��¹� ���, DLL��ü�� front�Լ��� back�Լ��� ȣ��
    }

    cout << endl << "list �ڿ� 6 7 8 9 10 ����" << endl;                        //��¹� ���
    for (int i = 6; i <= 10; i++) {                                             //6���� 10����
        DLL.addBack(i);                                                         //DLL��ü�� addBack�Լ��� i�� �Ѱ��ָ鼭 ȣ����.
        cout << "�� : " << DLL.front() << " / �� : " << DLL.back() << endl;     //��¹� ���, DLL��ü�� front�Լ��� back�Լ��� ȣ��
    }

    cout << endl << "list �տ� 3�� ����" << endl;                               //��¹� ���
    for (int i = 0; i < 3; i++) {                                               //0���� 2����(3��)
        DLL.removeFront();                                                      //DLL��ü�� removeFront�Լ��� ȣ����
        cout << "�� : " << DLL.front() << " / �� : " << DLL.back() << endl;     //��¹� ���, DLL��ü�� front�Լ��� back�Լ��� ȣ��
    }

    cout << endl << "list �ڿ� 3�� ����" << endl;                               //��¹� ���
    for (int i = 0; i < 3; i++) {                                               //0���� 2����(3��)
        DLL.removeBack();                                                       //DLL��ü�� removeBack�Լ��� ȣ����
        cout << "�� : " << DLL.front() << " / �� : " << DLL.back() << endl;     //��¹� ���, DLL��ü�� front�Լ��� back�Լ��� ȣ��
    }
}