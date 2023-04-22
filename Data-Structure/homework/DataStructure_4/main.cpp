#include <chrono>       //chrono ���̺귯���� ��� ��� ���� //**���۽ð��� ���ð� ������ ���� chorono ���̺귯�� ���
#include <stdlib.h>     //stdlib.h ���̺귯���� ��� ��� ���� //**�迭�� ���� �������� ��ġ�ϱ� ���� stdlib.h ���
#include <time.h>       //time.h ���̺귯���� ��� ��� ���� //**�迭�� ���� �������� ��ġ�ϱ� ���� time.h ���
using namespace std;    //��� ���� std:: ���� ����

#include "sorting.h"    //sorting.h�� ��� ��� ����
#include "keydata.h"    //keydata.h�� ��� ��� ����

void sorting();         //sorting()�Լ� ������Ÿ��.
void stable();          //stable()�Լ� ������Ÿ��.
void performance(int);  //performance()�Լ� ������Ÿ��.

void print_array(const int* array, int size);   //print_array()�Լ� ������Ÿ��.
void print_pair(const keydata* array, int size);//print_pair()�Լ� ������Ÿ��.

int random_av[100000000];   //������ ������ ������ �� ����� ��û ū �迭 ����
int test_av[100000000];     //������ ������ ������ �� ����� ��û ū �迭 ����

int main() {        //main()�Լ�


	cout << "���� ���� �˻�\n";   //��¹� ���
    sorting();                    //sorting�Լ� ȣ��
    cout << endl;                 //�ٹٲ� ���

    cout << "������ �˻�\n";        //��¹� ���
    stable();                       //stable�Լ� ȣ��
    cout << endl;                   //�ٹٲ� ���

    cout << "���� ��\n";          //��¹� ���
    performance(100);               //performation �Լ� ȣ��, ���� 100�� �Լ��� �Ѱ���
    performance(1000);              //performation �Լ� ȣ��, ���� 1000�� �Լ��� �Ѱ���
    performance(10000);             //performation �Լ� ȣ��, ���� 10000�� �Լ��� �Ѱ���
    performance(100000);            //performation �Լ� ȣ��, ���� 100000�� �Լ��� �Ѱ���
    performance(1000000);           //performation �Լ� ȣ��, ���� 1000000�� �Լ��� �Ѱ���
    cout << endl;                   //�ٹٲ� ���
    
    cout << "12180626 ���ÿ�" << endl; //�й�, �̸� ���

    return 0;       //��ȯ���� int�̹Ƿ� 0 return.
}

void sorting() {        //sorting�Լ� ����, parameter����, return ����. //**���� �� �Լ� �ϳ��� ���� main�Լ��� ����ϰ� ����.
    int size = 16;      //������ ���� size ������ ���ÿ� 16���� ����
    int* S = new int[size] { 32, 29, 49, 30, 22, 69, 14, 55, 70, 99, 23, 52, 78, 45, 26, 10 };  //ũ�Ⱑ 16�� S��� �����迭 �����ϰ�, ������ ���ÿ� �� �ʱ�ȭ
    cout << "            �ʱ�迭             : ";      //��¹� ���
    print_array(S, size);                               //print_array�Լ� ȣ��
    cout << endl << endl;                               //�ٹٲ� ���

    int* test = new int[size];                          //ũ�Ⱑ size�� ������ �迭 test�� ���� �Ҵ���.
                                                        
    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for���� ���� S �迭�� �ִ� ���� test�迭�� ����.
    insertion_sort(test, size);                         //insertion_sort �Լ� ȣ��
    cout << "��������(insertion sort) �� �迭 : ";      //��¹� ���
    print_array(test, size);                            //print_array�Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for���� ���� S �迭�� �ִ� ���� test�迭�� ����.
    selection_sort(test, size);                         //selection_sort �Լ� ȣ��
    cout << "��������(selection sort) �� �迭 : ";      //��¹� ���
    print_array(test, size);                            //print_array �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for���� ���� S �迭�� �ִ� ���� test�迭�� ����.
    merge_sort(test, size);                             //merge_sort �Լ� ȣ��
    cout << "�պ�����(merge sort) �� �迭     : ";      //��¹� ���
    print_array(test, size);                            //print_array �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for���� ���� S �迭�� �ִ� ���� test�迭�� ����.
    quick_sort(test, size);                             //merge_sort �Լ� ȣ��
    cout << "��������(quick sort) �� �迭     : ";      //��¹� ���
    print_array(test, size);                            //print_array �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    delete[] S;                                         //new�� ���� ������ �迭 S�� �Ҹ��Ŵ//**������ �����۵����� Ȯ���ϱ� ���� ������� �迭 S�� test�� delete[]�� ���� �Ҹ��Ŵ
    delete[] test;                                      //new�� ���� ������ �迭 test�� �Ҹ��Ŵ
}

void stable() {             //stable�Լ� ����, parameter ����, return ����.
    keydata pair[10] = {    //kedata ������ ������ �̷���� 10ĭ�� �迭 pair�� �����ϰ� ���� �ʱ�ȭ��.
     keydata('a', 3),       //**1���� 5���� 2���� �� 10���� �̷���� ������ ���� ���ڵ� �����ϱ� ���� ���ĺ�(key)�� ����.
     keydata('b', 2),       
     keydata('c', 4),
     keydata('d', 4),
     keydata('e', 2),
     keydata('f', 1),
     keydata('g', 5),
     keydata('h', 3),
     keydata('i', 5),
     keydata('j', 1)
    };
    int size = sizeof(pair) / sizeof(*pair);  //�迭�� ��ü ũ��(80) / �迭 ��ĭ�� ũ��(8)

    keydata test_pair[10];  //ũ�Ⱑ 10�� keydata�� �迭 test�� ����.

    cout << "         key(data) �迭          : ";      //��¹� ���
    print_pair(pair, size);                             //print_pair �Լ� ȣ��
    cout << endl << endl;                               //�ٹٲ� ���

    copy(pair, pair + size, test_pair);                 //copy�� ���� pair �迭�� ó������ �������� ���� test_pair�� ó������ ���ʴ�� �����Ѵ�.
    pair_insertion_sort(test_pair, size);               //pair_insertion_sort �Լ� ȣ��
    cout << "��������(insertion sort) �� �迭 : ";      //��¹� ���
    print_pair(test_pair, size);                        //print_pair �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    copy(pair, pair + size, test_pair);                 //copy�� ���� pair �迭�� ó������ �������� ���� test_pair�� ó������ ���ʴ�� �����Ѵ�.
    pair_selection_sort(test_pair, size);               //pair_seleciton_sort �Լ� ȣ��
    cout << "��������(selection sort) �� �迭 : ";      //��¹� ���
    print_pair(test_pair, size);                        //print_pair �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    copy(pair, pair + size, test_pair);                 //copy�� ���� pair �迭�� ó������ �������� ���� test_pair�� ó������ ���ʴ�� �����Ѵ�.
    pair_merge_sort(test_pair, size);                   //pair_merge_sort �Լ� ȣ��
    cout << "�պ�����(merge sort) �� �迭     : ";      //��¹� ���
    print_pair(test_pair, size);                        //print_pair �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���

    copy(pair, pair + size, test_pair);                 //copy�� ���� pair �迭�� ó������ �������� ���� test_pair�� ó������ ���ʴ�� �����Ѵ�.
    pair_quick_sort(test_pair, size);                   //pair_quick_sort �Լ� ȣ��
    cout << "��������(quick sort) �� �迭 :     ";      //��¹� ���
    print_pair(test_pair, size);                        //print_pair �Լ� ȣ��
    cout << endl;                                       //�ٹٲ� ���
}

void create_random_av(int size) {           //create_random_av �Լ� ����, �޾ƿ� ������ �Լ� ������ size�� ���
    int* random_av = new int[size];         //�޾ƿ� ũ�⸸ŭ ������ �迭 random_av�� ���� �Ҵ���.
    srand((int)time(NULL));                 //srand�� time�� ���� ������ ����
    for (int i = 0; i < size; i++) {        //for���� ���� 0~size-1����
        random_av[i] = rand() % 100;        //�����Ҵ��� �迭 random_av[i]�� 0~99������ ���ڸ� �������� ����.
    }
}


void performance(int size) {   //performance �Լ� ȣ��, �޾ƿ� parameter�� size�� ���           
    
    create_random_av(size);     //create_random_av �Լ��� ȣ���ϰ� �޾ƿ� ������ �Ѱ���

    chrono::system_clock::time_point start_time, end_time; //���۽ð��� ���ð��� ����ϱ� ���� ���� start_time, end_time
    cout << "ũ�� (" << size << ")   \n";                  //size ���
    
    copy(random_av, random_av + size, test_av);  //random_av�� test_av�� ����
    start_time = chrono::system_clock::now();   //���۽ð��� start_time�� ����  //**�Լ� ���� ���� �Ŀ� �ð��� ������ �� �� ���� ���� �ɸ� �ð��� �����Ѵ�. ���� ns������ �����ȴ�.
    insertion_sort(test_av, size);              //���۽ð��� ������ �� insertion_sort �Լ� ����
    end_time = chrono::system_clock::now();     //�Լ� ������ ���� �� �� �ð��� end_time�� ����
    cout << "insertion sort ��� �ð�: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //���۽ð��� �� �ð��� ���̸� ����Ѵ�.


    copy(random_av, random_av + size, test_av); //random_av�� test_av�� ����
    start_time = chrono::system_clock::now();   //���۽ð��� start_time�� ����  
    selection_sort(test_av, size);              //���۽ð��� ������ �� selection_sort �Լ� ����
    end_time = chrono::system_clock::now();     //�Լ� ������ ���� �� �� �ð��� end_time�� ����
    cout << "selection sort ��� �ð�: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //���۽ð��� �� �ð��� ���̸� ����Ѵ�.

    copy(random_av, random_av + size, test_av); //random_av�� test_av�� ����
    start_time = chrono::system_clock::now();   //���۽ð��� start_time�� ����  
    merge_sort(test_av, size);                  //���۽ð��� ������ �� merge_sort �Լ� ����
    end_time = chrono::system_clock::now();     //�Լ� ������ ���� �� �� �ð��� end_time�� ����
    cout << "merge sort ��� �ð�: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //���۽ð��� �� �ð��� ���̸� ����Ѵ�.

    //**�ڵ� ����� ��µ��� ����.
    //copy(random_av, random_av + size, test_av);   //random_av�� test_av�� ����
    //start_time = chrono::system_clock::now();     //���۽ð��� start_time�� ����  
    //quick_sort(test_av, size);                    //���۽ð��� ������ �� quick_sort �Լ� ����
    //end_time = chrono::system_clock::now();       //�Լ� ������ ���� �� �� �ð��� end_time�� ����
    //cout << "quick sort ��� �ð�: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //���۽ð��� �� �ð��� ���̸� ����Ѵ�.

}

void print_array(const int* array, int size) {      //�迭�� ������ִ� print_array�Լ�, ������ �迭�� ������ parameter�� ����
    for (int i = 0; i < size; i += 1) {             //for��, 0���� size-1����
        cout << array[i] << ' ';                    //�迭�� ��� ���� ���
    }
}

void print_pair(const keydata* array, int size) {                   //keydata�� �迭�� ������ִ� print_pair�Լ�, keydata�� �迭�� ������ parameter�� ����
    for (int i = 0; i < size; i += 1) {                             //for��, 0���� size-1����
        cout << array[i].key << '(' << array[i].data << ')' << ' '; //������ key�� data�� ��� �����.
    }
}