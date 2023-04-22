#pragma once            //������� �ߺ����Ǹ� ������.

#include <iostream>     //iostream ���̺귯�� ����
#include <string>       //string ���̺귯�� ����

using namespace std;    //�� ���̺귯���� ��� ����� std::�� ������ �ʰ� ��� ����

/////��Ÿ�ӿ��� �߻��ϴ� ����/////
class RuntimeException {        //RuntimeException Ŭ���� ����
private:
    string errorMsg;            //���ڿ������� errorMsg.

public:
    RuntimeException(const string& err) //RuntimeExceptiong�� ������ 
        : errorMsg(err) {               //Member initializer�� ���� ���� �ʱ�ȭ 
    }
    string getMessage() const {         //private ������ errorMsg�� reading �ϱ� ���� get�Լ� ��� �Լ� ��ü const
        return errorMsg;                //private�� ���ڿ� errorMsg�� return��.
    }
};

inline ostream& operator << (ostream& out, const RuntimeException& e) {   // << ������ �����ε�, inline ���
    return out << e.getMessage();                                         // << ��ȣ�� Ȱ���Ͽ� private�� ���� errorMsg�� return���ִ� getMessage�Լ� ���.
}

class StackEmptyException : public RuntimeException {   //RuntimeException�� ��ӹ޴� StackEmptyException Ŭ���� ����
public:
    StackEmptyException(const string& err)              //������
        : RuntimeException(err) {                       //Member initializer, ������ �� �Ѱܹ��� err ���ڿ��� RuntimeException�� ������ parameter�� �Ѱ���.
    }
};

class StackFullException : public RuntimeException {   //RuntimeException�� ��ӹ޴� StackFullException Ŭ���� ����
public:
    StackFullException(const string& err)               //������
        : RuntimeException(err) {                       //Member initializer, ������ �� �Ѱܹ��� err ���ڿ��� RuntimeException�� ������ parameter�� �Ѱ���.
    }
};

///// stack ���� //////
template <typename E>   //template�� ���, E�� ���� data type�� �ٲ�. 
class ArrayStack {      //ArrayStack Ŭ���� ����
    enum { DEF_CAPACITY = 100 };    //�ش� scope���� DEF_CARACITY�� ���������� 100�̶�� ������ Ȱ���.

private:
    E* S;               //stack �ȿ� ���� ���� ����
    int capacity;       //stack�� ũ��
    int t;              //stack�� ���� �� ����(top)�� ��ġ

public:
    ArrayStack(int cap= DEF_CAPACITY )          //default ������, �⺻ ������ cap = 100;
        :S(new E[cap]), capacity(cap), t(-1) {  //Member initializer
                                                //�Է¹��� cap��ŭ �迭 S�� �����Ҵ���, datatype�� ���� E�� �޶���. capacity�� Arraystack�� ������ �� ���� �� cap���� �ʱ�ȭ, t�� -1�� �ʱ�ȭ 
    }

    ~ArrayStack() {         //�Ҹ���
        delete[] S;         //�����ڿ��� new�� Ȱ���� S��� �迭�� �����Ҵ� �߱� ������ �����Ҵ��� �迭 S�� �Ҹ��Ŵ.
    }

    int size() const {      //size�Լ� ����
        return (t + 1);     //t�� 1�� ���� ���� return
    }

    bool empty() const {    //empty�Լ� ����
        return (t < 0);     //t�� ������ stack�� �������. ���ǿ� �´ٸ� true ��ȯ
    }

    const E& top() const throw(StackEmptyException) {           //top�Լ� ���� 
        if (empty())                                            //���ǹ� if(���� empty�� ��ȯ���� true���)
            throw StackEmptyException("Top of empty stack");    //���� ���� ���� ���� ����� ���ϹǷ� StackEmptyException�� �ش� ������ �ѱ�.
        return S[t];                                            //�׷��� ������ �迭 S�� t��° ��(���� ���� ��)�� ��ȯ��.
    }

    void push(const E& e) throw(StackFullException) {           //push�Լ� ����, �Ѱܹ��� ���� e�� ���.
                                                                //const�� ���� parameter�� ���� ������ �� ������ �� �� �ִ�. 
        if (size() == capacity)                                 //size�Լ����� ��ȯ�� ���� stack�� ũ��� ���ٸ�(stack�� �� á�ٸ�)
            throw StackFullException("Push to full stack");     //push�� ���� �߰��� �� �����Ƿ� StackFullException�� �ش� ������ �ѱ�
        S[++t] = e;                                             //�׷��� ������ S�� ���� ���� ���� ���� ĭ�� e�� �Ҵ�.
    }

    void pop() throw(StackEmptyException) {                     //pop�Լ� ����  
        if (empty())                                            //���ǹ� if(���� empty�� ��ȯ���� true���)
            throw StackEmptyException("Pop from empty stack");  //����ֱ� ������ ������ ����� �����Ƿ� StackEmptyException�� �ش� ������ �ѱ�.
        --t;                                                    //�׷��� ������ ���� ���� ������ �ϳ� ����
    }
};