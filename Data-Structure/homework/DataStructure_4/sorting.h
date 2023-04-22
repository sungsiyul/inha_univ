#pragma once            //������� �ߺ����� ����
#include <iostream>     //iostream ���̺귯���� ��� ��� ����
using namespace std;    //���� ���̺귯���� ����� ����� �� std:: ���� ����
#include "keydata.h"    //keydata.h�� Ŭ���� ��� ����

void insertion_sort(int* av, int size) {    //insertion_sort �Լ� ����, ������ �迭��, ������ ������ parameter�� ����, return�� ����
    for (int i = 1; i < size; i ++) {     //for�� 1���� size-1����
        const int key = av[i];          //�ι�° ĭ�� ������ key�� �����Ͽ� ���� ����.
        int j = i - 1;                  //j�� ���� �ݺ������� i�� ��ĭ, j�� ���� �ٿ����� key���� �տ� �ִ� ��簪�� �񱳸� �� �� �ְ� ��.
        while (j < size && key < av[j]) { //�� ����� size�� ����� �ʰ�, key���� ���ϴ� ��(av[j])�� �� ũ�ٸ� 
            av[j + 1] = av[j];          // ���Ҹ� ���������� ��ĭ �̵���Ŵ
            j --;                       //j = j-1
        }
        av[j + 1] = key;                //������ Ż���� ������ �� key���� ���� ���� ������ �� key ���� av[j+1]�� �����Ѵ�.
    }                                   //av[j+1] = key ������ ���� �� ���� i�� 1�� �߰� �ǰ� key = av[i]�� ���� �� �Ʒ� ���Ҹ� key�� �Ͽ� �񱳸� �ݺ��Ѵ�.
}

void pair_insertion_sort(keydata* av, int size) {   //pair_insertion_sort �Լ� ����
    for (int i = 1; i < size; i += 1) {             
        const keydata key = av[i];
        int j = i - 1;
        while (j < size && key.data < av[j].data) {
            av[j + 1] = av[j];
            j -= 1;
        }
        av[j + 1] = key;
    }
}

void selection_sort(int* av, int size) {            //selection_sort �Լ� ����, ������ �迭��, ������ ������ parameter�� ����, return�� ����
    for (int i = 0; i < size; i ++) {               //for��, 0���� size-1���� 
        int min_elem = av[i];                       //���� ���� ù �ε����� ���� �ּҰ��̶�� ������ ��.
        int index = i;                              //
        for (int j = i + 1; j < size; j += 1) {     //j�� �ּҰ����� ������ ���������� j���� ������ for�� ���� �ּҰ��� ã�� ��ĵ�۾��� ��.
            if (min_elem > av[j]) {                 //���� ó�� �ٺ�ó�� ������ �ּҰ����� �� ���� ���� �߰��Ѵٸ�
                min_elem = av[j];                   //�� �ּҰ��� ó�� ������ �ּҰ��� ������.
                index = j;                          //���° ���̾��µ� index�� ������.
            }                       
        }                                           //j++�� ���� �迭�� ������ ��ĵ�Ͽ� ���� ���� ���� min_elem�� �־���.

        int temp;                                   //���� �ٲٱ����� �ڵ� 
        temp = av[i];                               //av[i]���� temp�� ����
        av[i] = av[index];                          //av[index]���� av[i]�� ����
        av[index] = temp;                           //temp�� ������ �״� av[i]���� av[index]�� ����
    }
}

void pair_selection_sort(keydata* av, int size) {    //pair_selection_sort �Լ� ����
    for (int i = 0; i < size; i += 1) {
        keydata min_elem = av[i];
        int index = i;
        for (int j = i + 1; j < size; j += 1) {
            if (min_elem.data > av[j].data) {
                min_elem = av[j];
                index = j;
            }
        }
        keydata temp;
        temp = av[i];
        av[i] = av[index];
        av[index] = temp;
    }
}

//merge_sorting �Լ��� merge_sort�� �迭�� �������� ������ �̸� �ݺ��� �� ��е� �迭���� ������ ���ִ� sorting�̴�.
void merge_sorting(int* array, int start_index, int end_index) {    //merge_sorting �Լ� ����, ������ �迭��, sorting�� ������ �� �� �ִ� ���� �ε����� �� �ε����� �Ķ���ͷ� ���� 
    const int size = end_index - start_index + 1;                   //size�� �迭�� ũ��, �� �ε������� ���� �ε����� �� ������ 1�� ������
    if (size > 1) {                                         //size�� 1�� �� ������ divide�� �ؾ��ϹǷ� size>1�̶�� ������ ����Ѵ�.
        const int left_start = start_index;                 //left_start : ����� �迭�� ���� ù��° �迭
        const int right_start = left_start + (size / 2);    //right_start :����� �迭�� ������ ù��° �迭
        const int left_end = right_start - 1;               //left_end : ����� �迭�� ���� ������ �迭
        const int right_end = end_index;                    //right_end : ����� �迭�� ������ ������ �迭
        
        merge_sorting(array, left_start, left_end);         //�迭�� ������ ���� �������� ���� �� merge_sorting�� ����ϸ鼭 1���� ���� �� ���� ����ϰ� ������.
        merge_sorting(array, right_start, right_end);

        int* new_array = new int[size]; //size ũ���� ������ �迭�� �����Ҵ�
                                        
        int left_index = left_start;    //left_index : ���� �迭�� ���� �ε���
        int right_index = right_start;  //right_index : ������ �迭�� ���� �ε���
        int new_index = 0;              //new_index : ���� �Űܴ��� �迭�� �ε���
        while (left_index <= left_end && right_index <= right_end) {    //while �ݺ����� ���� left_index�� right_index�� �񱳸� ��� ��ġ�� ��� +1�� �Ǿ ��е� �迭�� ��� �� ���� �ݺ��Ͽ� ���
            if (array[left_index] < array[right_index]) {               //������ ���Ұ� �������� ���Һ��� ���� ��
                new_array[new_index] = array[left_index];               //������ ���Ҹ� new_array�� �ű�.
                left_index++;                                           //���� �迭�� �ε����� 1 �߰���.(���������� ��ĭ �̵�)
            }
            else {                                                      //������ ���Ұ� �������� ���Һ��� ũ�ų� ���� ��
                new_array[new_index] = array[right_index];              //������ ���Ҹ� new_array�� �ű�.
                right_index++;                                          //������ �迭�� �ε����� 1 �߰���.(���������� ��ĭ �̵�)
            }
            new_index ++;                                             //new_array�� ���� �ϳ��� �߰��� ������ ���� ĭ�� ���� �ֱ� ���� �ε����� 1�� ����.
        }
        if (left_index > left_end) {                                                   //1�� �߰��Ǵ� ���� �迭�� �ε����� ������ Ŀ�� ��
            copy(array + right_index, array + right_end + 1, new_array + new_index);   //���� ������ �迭�� ��� ���� new_array�� �־������ ĭ���� �־���.
        }
        else {                                                                          //1�� �߰��Ǵ� ������ �迭�� �ε����� ������ Ŀ�� ��
            copy(array + left_index, array + right_start, new_array + new_index);       //���� ���� �迭�� ��� ���� new_array�� �־������ ĭ���� �־���.
        }
        copy(new_array, new_array + size, array + start_index);         //new_array�� ��� ���� array�� ���ۺ��� ���ʴ�� ���Խ�Ŵ

        delete[] new_array;         //�����Ҵ��� new_array�� delete�� �Ҹ��Ŵ
    }
}

void merge_sort(int* array, int size) {         //merge_sort �Լ� ����, ������ �迭��, ������ ������ parameter�� ����, return�� ����
    merge_sorting(array, 0, size - 1);          //merge_sorting�Լ� ȣ��, �Լ��� ���� �޾ƿ� array �迭�� �����ε��� ���ε����� �Ѱ���.
}


void pair_merge_sorting(keydata* array, int start_index, int end_index) {   //pair_merge_sorting �Լ� ����
    const int size = end_index - start_index + 1;
    if (size > 1) {
        const int left_start = start_index;
        const int right_start = left_start + (size / 2);
        const int left_end = right_start - 1;
        const int right_end = end_index;
        pair_merge_sorting(array, left_start, left_end);
        pair_merge_sorting(array, right_start, right_end);

        keydata* new_array = new keydata[size];

        int left_index = left_start;
        int right_index = right_start;
        int k = 0;
        while (left_index <= left_end && right_index <= right_end) {
            if (array[left_index].data < array[right_index].data) {
                new_array[k] = array[left_index];
                left_index++;
            }
            else {
                new_array[k] = array[right_index];
                right_index++;
            }
            k += 1;
        }
        if (left_index > left_end) {
            copy(array + right_index, array + right_end + 1, new_array + k);
        }
        else {
            copy(array + left_index, array + right_start, new_array + k);
        }
        copy(new_array, new_array + size, array + start_index);

        delete[] new_array;
    }
}

void pair_merge_sort(keydata* array, int size) {            //pair_merge_sort �Լ� ����
    pair_merge_sorting(array, 0, size - 1);
}


void quick_sorting(int* array, int start_index, int last_index) {           //quick_sorting �Լ� ����, ������ �迭��, sorting�� ������ �� �� �ִ� ���� �ε����� �� �ε����� �Ķ���ͷ� ����
    if (start_index < last_index) {                                         //if�� �迭�� ���� �ε����� �� �ε������� ���� ��

        const int pivot = array[last_index];        //�迭�� ���� �� �ڸ��� ���� pivot���� ����
        int left_index = start_index;               //�迭�� ù �ε����� left_index�� ����**���������� �� �� �ְ� ���ʿ��� ���������� �̵��ϴ� �ε����� left_index, �����ʿ��� �������� �̵��ϴ� �ε����� right_index�� ������
        int right_index = last_index - 1;           //�迭�� ������ �ε����� right_index�� ����

        while (left_index < right_index) {          //left_index�� right_index���� ���� �� while�� �ݺ�
            while (left_index <= right_index && left_index < last_index - 1 && array[left_index] < pivot) { //���� �ε����� ������ �ε������� �۰ų� ������ ���� �ε����� ������ �ε����� ���� �ʰ�, ���� �ε����� ���� pivot���� ������
                left_index ++;                                                                            //���� �ε����� ���� 1 �߰��� //**���� �ε����� ���������� ��ĭ �̵���Ŵ.
            }
            while (left_index <= right_index && right_index > 0 && array[right_index] > pivot) { //���� �ε����� ������ �ε������� �۰ų� ������ ������ �ε����� 0���� ũ��, ������ �ε����� ���� pivot���� ũ��
                right_index --;                                                                  //������ �ε����� ���� 1 �߰��� //**������ �ε����� �������� ��ĭ �̵���Ŵ
            }
            if (left_index < right_index) {         //left_index�� right_index�� ���߾��� �� ���ǹ� �ǵ�: ���� left_index�� right_index���� �۴ٸ�
                int temp;                           //array[left_index]�� array[right_index]�� ���� �ٲ��ش�.
                temp = array[left_index];
                array[left_index] = array[right_index];
                array[right_index] = temp;
            }                                      //���� ���� ����ٸ�?(left_index�� right_index�� ����) �ٽ� �ݺ��� �������� ���ư��� ���ǿ� ���� �ʾ� ���ǹ� Ż��

            if (left_index == last_index - 1 && left_index == right_index) {    //pivot�� �迭���� ���� ū ���� �����Ͽ� ����� ���� ������

                //**pivot ���� : �� �� pivot�� �迭�� ��ü ũ�⿡�� �߰��� ��ġ�� ���� pivot ��ġ�� ���� �� ���� �ٲ��ش�. ��� �ٲ��� �ڿ��� ���� ���� Ŭ Ȯ���� ������ �̹� �����ʿ��� ���� ū ���� �־��� ������ �߾� ������ ���� �幰�ٰ� �����Ѵ�. ����� ��Ȯ�� ȿ�������� ���� �ʴ��� �־��� ��츦 ���Ҽ��� �ִ�. ����, �ᱹ �迭�� ũ�Ⱑ Ŀ���� �迭 ���� �߾Ӱ��� ã�µ��� ���� �۾��� �ʿ�� �ϴµ� �迭�� �߰� ��ġ�� ���� size/2�� ���� ���ϴ� �ε����� ���� �ѹ��� ã�� �� �ִ�. �׷��� ������ pivot�� �ش����̾ ����� ���� ���� ��, �߰� ��ġ�� ���� ���� ���� ���� �ٲ��ش�.

                int mid = (last_index - start_index + 1) / 2;       //�迭�� �߰� �ε����� ��Ÿ���� mid //�迭�� �߰� �ε����� ã�� ���� ��ü ũ�⿡�� /2�� ���ش�.

                int temp;                                       //temp�� ���� �迭�� ������ ���� �߰����� �ٲ��ش�.
                temp = array[last_index];                       //array[last_index]���� temp�� ����
                array[last_index] = array[last_index - mid];    //array[last_index - mid]���� array[last_index]�� ����
                array[last_index - mid] = temp;                 //temp�� �����ص� array[last_index]���� array[last_index - mid]�� ����
            }
        }

        //left_index(ū ���� �ڷ� ������ ����)�� pivot���� last_index�� ���� �ٲ���
        int temp;                               //temp�� ���� left_index ��ġ�� ���� ���� ���� ��ġ�� last_index�� ���� �ٲ��ش�.
        temp = array[left_index];               //array[left_index]���� temp�� ����
        array[left_index] = array[last_index];  //array[last_index]���� array[left_index]�� ����
        array[last_index] = temp;               //temp�� �����ص� array[left_index]���� [last_index]�� ����

        //�迭�� pivot�� �������� ����Ѵ�. �ڵ� �������δ� �ٷ� �� �ڵ忡�� pivot���� left_index�� �־��� ������ left_index�� �������� ����Ѵ�.
        if (left_index >= 1) { //���ǹ� if�� ���� ���� left_index�� �ƹ��� �̵��� ���� �ʾ� 1�̻��� ���ǿ� ���Ե��� ���Ѵٸ� ����� ���ϰ� �ϳ��� �迭�� quick_sorting�� �����Ѵ�.
            quick_sorting(array, start_index, left_index - 1);  //���� ������ ���� ���ۺ��� pivot���� �������� quick_sorting���� �����ְ�
        }
        quick_sorting(array, left_index + 1, last_index);       //���� ������ ���� pivot���� ���ĺ��� ������ quick_sorting���� �����ش�.
    }
}

void quick_sort(int* array, int size) { //quick_sort �Լ� ����, ������ �迭��, ������ ������ parameter�� ����, return�� ����
    quick_sorting(array, 0, size - 1);  //quick_sorting�Լ� ȣ��, �Լ��� ���� �޾ƿ� array �迭�� �����ε��� ���ε����� �Ѱ���.
}


void pair_quick_sorting(keydata* array, int start_index, int last_index) {  //pair_quick_sorting �Լ� ����
    if (start_index < last_index) {                                         
        const keydata pivot = array[last_index];
        int left_index = start_index;
        int right_index = last_index - 1;

        while (left_index < right_index) {
            while (left_index <= right_index && left_index < last_index - 1 && array[left_index].data < pivot.data) {
                left_index += 1;
            }
            while (left_index <= right_index && right_index > 0 && array[right_index].data > pivot.data) {
                right_index -= 1;
            }
            if (left_index < right_index) {
                keydata temp;
                temp = array[left_index];
                array[left_index] = array[right_index];
                array[right_index] = temp;
            }

            if (left_index == last_index - 1 && left_index == right_index) {

                int mid_index = (last_index - start_index) / 2;

                keydata temp;
                temp = array[last_index];
                array[last_index] = array[last_index - mid_index];
                array[last_index - mid_index] = temp;
            }
        }

        keydata temp;
        temp = array[left_index];
        array[left_index] = array[last_index];
        array[last_index] = temp;

        if (left_index >= 1) {
            pair_quick_sorting(array, start_index, left_index - 1);
        }
        pair_quick_sorting(array, left_index + 1, last_index);
    }
}

void pair_quick_sort(keydata* array, int size) {        //pair_quick_sort �Լ� ����
    pair_quick_sorting(array, 0, size - 1);
}