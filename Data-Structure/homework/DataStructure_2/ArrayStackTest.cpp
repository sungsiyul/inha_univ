#include <iostream>     //iostream ���̺귯�� ����
using namespace std;    //iostream ���̺귯���� ��� ����� std:: �� ���̰� ��� ����.

#include "ArrayStack.h" //ArrayStack.h�� ��� ��� ����.

int main() {            //main�Լ� ����, return type : int

    try {   //���ܿ� ���� �˻� ������ ����
        cout << "Stack" << endl;    //size(), push(), pop(), top()�� �����۵� ���� ���̴� �ڵ�

        int stackSize = 3;                  //������ ���� stackSize�� �����ϰ� 3���� �ʱ�ȭ
        ArrayStack<int> mystack(stackSize); //stack�� ũ�Ⱑ 3�� mystack3�� �������

        cout << "������� = " << stackSize << endl;         // ������ ��������� �������

        cout << "ũ�� : " << mystack.size() << endl;        //size()����, stack�� �����ϰ� �ִ� ����(0) return.

        mystack.push(1);                                    //push()����, stack�� ���� ���� 1�̶�� ���� �־���.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() ����, stack�� ���� ���� ����� ���� return.  
            << "ũ�� : " << mystack.size() << endl;         //size()����, stack�� �����ϰ� �ִ� ����(1) return.

        mystack.push(2);                                    //push()����, stack�� ���� ���� 2�̶�� ���� �־���.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() ����, stack�� ���� ���� ����� ���� return.
            << "ũ�� : " << mystack.size() << endl;         //size()����, stack�� �����ϰ� �ִ� ����(2) return.

        mystack.pop();                                      //pop()����, stack�� ���� ���� ���� ������.
        cout << "(pop)\ntop : " << mystack.top() << endl    //top()����, stack�� ���� ���� ����� ���� 1 return.
            << "ũ�� : " << mystack.size() << endl;         //size()����, ���� ���� ���� ���ŵ����Ƿ� �����ϰ� �ִ� ������ 1

        mystack.push(4);                                    //push()����, stack�� ���� ���� 4�̶�� ���� �־���.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() ����, stack�� ���� ���� ����� ���� return.
            << "ũ�� : " << mystack.size() << endl;         //size()����, stack�� �����ϰ� �ִ� ����(2) return.

        mystack.push(5);                                    //push()����, stack�� ���� ���� 5�̶�� ���� �־���.
        cout << "(push)\ntop : " << mystack.top() << endl   //top() ����, stack�� ���� ���� ����� ���� return.
            << "ũ�� : " << mystack.size() << endl;         //size()����, stack�� �����ϰ� �ִ� ����(3) return.

    }
    //���ܰ� �������Ƿ� catch ���� �������� ����.
    catch (const StackEmptyException& e) {                          //�� ������ �� ������ catch
        cout << "StackEmptyException is occurred: " << e << endl;   // �ش� ������ ����ϰ� StackEmptyException���� �޾ƿ� e �� ���
    }
    catch (const StackFullException& e) {                           //���� á�� �� ������ catch
        cout << "StackFullException is occurred: " << e << endl;    // �ش� ������ ����ϰ� StackFullException���� �޾ƿ� e �� ���
    }
    cout << endl;
   
    try {   //���ܿ� ���� �˻� ������ ����
        cout << "Stack 1 for StackFullException" << endl;   //stack�� full�� ���¿��� push�� �� ��, stackFullException�� �߻����� ���̴� �ڵ�

        int stackSize = 3;                                  //������ ���� stackSize�� �����ϰ� 3���� �ʱ�ȭ
        ArrayStack<int> mystack1(stackSize);                //stack�� ũ�Ⱑ 3�� mystack1�� ������� //*stackfullexception�� ���� ���� mystack1����

        cout << "������� = " << stackSize << endl;         //������ ��������� ���

        cout << "ũ�� : " << mystack1.size() << endl;       //size()����, stack�� �����ϰ� �ִ� ����(0) return.

        mystack1.push(1);                                   //stack�� �� ���� 1 �Է�
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack�� ���� ���� �� ���
            << "ũ�� : " << mystack1.size() << endl;        //stack�� ũ�� ���, ���� �Ѱ� �����Ƿ� ũ�� 1

        mystack1.push(2);                                   //stack�� �� ���� 2 �Է�
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack�� ���� ���� �� ���
            << "ũ�� : " << mystack1.size() << endl;        //stack�� ũ�� ���, ���� �Ѱ� �����Ƿ� ũ�� 2

        mystack1.push(3);                                   //stack�� �� ���� 3 �Է�
        cout << "(push)\ntop : " << mystack1.top() << endl  //stack�� ���� ���� �� ���
            << "ũ�� : " << mystack1.size() << endl;        //stack�� ũ�� ���, ���� �Ѱ� �����Ƿ� ũ�� 3

        mystack1.push(4);                                   //stack�� �� ���� 4 �Է�, ��������� ũ�Ⱑ 3�̹Ƿ� push���� ���ܰ� �߻���, �Ʒ��� catch�� ����
        cout << "top : " << mystack1.top() << endl 
            << "ũ�� : " << mystack1.size() << endl;
    }
    catch (const StackEmptyException& e) {                       //�� ������ �� ������ catch
        cout << "StackEmptyException is occurred: " << e << endl;// �ش� ������ ����ϰ� StackEmptyException���� �޾ƿ� e �� ���
    }
    catch (const StackFullException& e) {                        //���� á�� �� ������ catch
        cout << "StackFullException is occurred: " << e << endl; // �ش� ������ ����ϰ� StackFullException���� �޾ƿ� e �� ���
    }
    cout << endl;

    try {   //���ܿ� ���� �˻� ������ ����
        cout << "Stack 2 for StackEmptyException" << endl;  //stack��  empty�� ���¿��� push�� �� ��, stackFullException�� �߻����� ���̴� �ڵ�

        int stackSize = 3;                                  //������ ���� stackSize�� �����ϰ� 3���� �ʱ�ȭ
        ArrayStack<int> mystack2(stackSize);                //stack�� ũ�Ⱑ 3�� mystack1�� ������� //*stackfullexception�� ���� ���� mystack1����

        cout << "������� = " << stackSize << endl;         //������ ��������� ���

        cout << "ũ�� : " << mystack2.size() << endl;       //size()����, stack�� �����ϰ� �ִ� ����(0) return.

        mystack2.push(1);                                   //stack�� �� ���� 1 �Է�
        cout << "(push)\ntop : " << mystack2.top() << endl  //stack�� ���� ���� �� ���
            << "ũ�� : " << mystack2.size() << endl;        //stack�� ũ�� ���, ���� �Ѱ� �����Ƿ� ũ�� 1

        mystack2.push(2);                                   //stack�� �� ���� 2 �Է�
        cout << "(push)\ntop : " << mystack2.top() << endl  //stack�� ���� ���� �� ���
            << "ũ�� : " << mystack2.size() << endl;        //stack�� ũ�� ���, ���� �Ѱ� �����Ƿ� ũ�� 2        

        // 2���� ���� ���� �� 3���� �� ���Žõ�
        mystack2.pop();                                     //stack�� �� ���� �� ����
        cout << "(pop)\ntop : " << mystack2.top() << endl   //���� ���� �� 1
            << "ũ�� : " << mystack2.size() << endl;        //stack�� ũ�� 1

        mystack2.pop();                                     //stack�� �� ���� �� ����
        cout << "(pop)\ntop : " << mystack2.top() << endl   //�����ִ°� �����Ƿ� pop���� ���ܰ� �߻���, �Ʒ��� catch�� ����
            << "ũ�� : " << mystack2.size() << endl;
    }
    catch (const StackEmptyException& e) {                          //�� ������ �� ������ catch
        cout << "StackEmptyException is occurred: " << e << endl;   // �ش� ������ ����ϰ� StackEmptyException���� �޾ƿ� e �� ���
    }
    catch (const StackFullException& e) {                           //���� á�� �� ������ catch
        cout << "StackFullException is occurred: " << e << endl;    // �ش� ������ ����ϰ� StackFullException���� �޾ƿ� e �� ���
    }
    cout << endl;
    cout << "12180626 ���ÿ�";
    return 0;   //main()�� ��ȯ���� int�����Ƿ� 0�� ��ȯ��.
}