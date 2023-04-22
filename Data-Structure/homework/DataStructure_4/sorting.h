#pragma once            //헤더파일 중복정의 방지
#include <iostream>     //iostream 라이브러리의 기능 사용 가능
using namespace std;    //위의 라이브러리의 기능을 사용할 때 std:: 생략 가능
#include "keydata.h"    //keydata.h의 클래스 사용 가능

void insertion_sort(int* av, int size) {    //insertion_sort 함수 정의, 정수형 배열과, 정수형 변수를 parameter로 받음, return값 없음
    for (int i = 1; i < size; i ++) {     //for문 1부터 size-1까지
        const int key = av[i];          //두번째 칸의 값부터 key로 설정하여 값을 비교함.
        int j = i - 1;                  //j는 같은 반복문에서 i의 앞칸, j의 값을 줄여가며 key보다 앞에 있는 모든값과 비교를 할 수 있게 함.
        while (j < size && key < av[j]) { //비교 대상이 size를 벗어나지 않고, key보다 비교하는 값(av[j])이 더 크다면 
            av[j + 1] = av[j];          // 원소를 오른쪽으로 한칸 이동시킴
            j --;                       //j = j-1
        }
        av[j + 1] = key;                //조건이 탈출한 곳에서 즉 key보다 작은 값을 만났을 때 key 값을 av[j+1]에 대입한다.
    }                                   //av[j+1] = key 문장이 끝난 뒤 이후 i가 1이 추가 되고 key = av[i]를 통해 그 아래 원소를 key로 하여 비교를 반복한다.
}

void pair_insertion_sort(keydata* av, int size) {   //pair_insertion_sort 함수 정의
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

void selection_sort(int* av, int size) {            //selection_sort 함수 정의, 정수형 배열과, 정수형 변수를 parameter로 받음, return값 없음
    for (int i = 0; i < size; i ++) {               //for문, 0부터 size-1까지 
        int min_elem = av[i];                       //가장 먼저 첫 인덱스의 값이 최소값이라는 가정을 함.
        int index = i;                              //
        for (int j = i + 1; j < size; j += 1) {     //j는 최소값으로 지정한 다음값으로 j부터 끝까지 for을 통해 최소값을 찾는 스캔작업을 함.
            if (min_elem > av[j]) {                 //만약 처음 바보처럼 지정한 최소값보다 더 작은 값을 발견한다면
                min_elem = av[j];                   //그 최소값을 처음 지정한 최소값에 대입함.
                index = j;                          //몇번째 값이었는데 index에 저장함.
            }                       
        }                                           //j++을 통해 배열의 끝까지 스캔하여 가장 작은 값을 min_elem에 넣어줌.

        int temp;                                   //값을 바꾸기위한 코드 
        temp = av[i];                               //av[i]값을 temp에 저장
        av[i] = av[index];                          //av[index]값을 av[i]에 저장
        av[index] = temp;                           //temp에 저장해 뒀던 av[i]값을 av[index]에 저장
    }
}

void pair_selection_sort(keydata* av, int size) {    //pair_selection_sort 함수 정의
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

//merge_sorting 함수는 merge_sort는 배열을 절반으로 나누고 이를 반복한 뒤 양분된 배열에서 정렬을 해주는 sorting이다.
void merge_sorting(int* array, int start_index, int end_index) {    //merge_sorting 함수 정의, 정수형 배열과, sorting의 범위를 알 수 있는 시작 인덱스와 끝 인덱스를 파라미터로 받음 
    const int size = end_index - start_index + 1;                   //size는 배열의 크기, 끝 인덱스에서 시작 인덱스를 뺀 값에서 1을 더해줌
    if (size > 1) {                                         //size가 1이 될 때까지 divide를 해야하므로 size>1이라는 조건을 사용한다.
        const int left_start = start_index;                 //left_start : 양분한 배열중 왼쪽 첫번째 배열
        const int right_start = left_start + (size / 2);    //right_start :양분한 배열중 오른쪽 첫번째 배열
        const int left_end = right_start - 1;               //left_end : 양분한 배열중 왼쪽 마지막 배열
        const int right_end = end_index;                    //right_end : 양분한 배열중 오른쪽 마지막 배열
        
        merge_sorting(array, left_start, left_end);         //배열의 범위를 통해 절반으로 나눈 뒤 merge_sorting을 재귀하면서 1개가 남을 때 까지 양분하고 정렬함.
        merge_sorting(array, right_start, right_end);

        int* new_array = new int[size]; //size 크기의 정수형 배열을 동적할당
                                        
        int left_index = left_start;    //left_index : 왼쪽 배열의 시작 인덱스
        int right_index = right_start;  //right_index : 오른쪽 배열의 시작 인덱스
        int new_index = 0;              //new_index : 값을 옮겨담을 배열의 인덱스
        while (left_index <= left_end && right_index <= right_end) {    //while 반복문을 통해 left_index나 right_index가 비교를 모두 마치고 계속 +1이 되어서 양분된 배열을 벗어날 때 까지 반복하여 계산
            if (array[left_index] < array[right_index]) {               //왼쪽의 원소가 오른쪽의 원소보다 작을 때
                new_array[new_index] = array[left_index];               //왼쪽의 원소를 new_array로 옮김.
                left_index++;                                           //왼쪽 배열의 인덱스를 1 추가함.(오른쪽으로 한칸 이동)
            }
            else {                                                      //왼쪽의 원소가 오른쪽의 원소보다 크거나 같을 때
                new_array[new_index] = array[right_index];              //오른쪽 원소를 new_array로 옮김.
                right_index++;                                          //오른쪽 배열의 인덱스를 1 추가함.(오른쪽으로 한칸 이동)
            }
            new_index ++;                                             //new_array에 값이 하나씩 추가될 때마다 다음 칸에 값을 넣기 위해 인덱스도 1씩 증가.
        }
        if (left_index > left_end) {                                                   //1씩 추가되는 왼쪽 배열의 인덱스가 끝보다 커질 때
            copy(array + right_index, array + right_end + 1, new_array + new_index);   //남은 오른쪽 배열의 모든 값을 new_array의 넣어줘야할 칸부터 넣어줌.
        }
        else {                                                                          //1씩 추가되는 오른쪽 배열의 인덱스가 끝보다 커질 때
            copy(array + left_index, array + right_start, new_array + new_index);       //남은 왼쪽 배열의 모든 값을 new_array의 넣어줘야할 칸부터 넣어줌.
        }
        copy(new_array, new_array + size, array + start_index);         //new_array의 모든 값을 array의 시작부터 차례대로 대입시킴

        delete[] new_array;         //동적할당한 new_array를 delete로 소멸시킴
    }
}

void merge_sort(int* array, int size) {         //merge_sort 함수 정의, 정수형 배열과, 정수형 변수를 parameter로 받음, return값 없음
    merge_sorting(array, 0, size - 1);          //merge_sorting함수 호출, 함수를 통해 받아온 array 배열과 시작인덱스 끝인덱스를 넘겨줌.
}


void pair_merge_sorting(keydata* array, int start_index, int end_index) {   //pair_merge_sorting 함수 정의
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

void pair_merge_sort(keydata* array, int size) {            //pair_merge_sort 함수 정의
    pair_merge_sorting(array, 0, size - 1);
}


void quick_sorting(int* array, int start_index, int last_index) {           //quick_sorting 함수 정의, 정수형 배열과, sorting의 범위를 알 수 있는 시작 인덱스와 끝 인덱스를 파라미터로 받음
    if (start_index < last_index) {                                         //if문 배열의 시작 인덱스가 끝 인덱스보다 작을 때

        const int pivot = array[last_index];        //배열의 가장 끝 자리의 값을 pivot으로 지정
        int left_index = start_index;               //배열의 첫 인덱스를 left_index로 지정**직관적으로 볼 수 있게 왼쪽에서 오른쪽으로 이동하는 인덱스를 left_index, 오른쪽에서 왼쪽으로 이동하는 인덱스를 right_index로 선언함
        int right_index = last_index - 1;           //배열의 마지막 인덱스를 right_index로 지정

        while (left_index < right_index) {          //left_index가 right_index보다 작을 때 while문 반복
            while (left_index <= right_index && left_index < last_index - 1 && array[left_index] < pivot) { //왼쪽 인덱스가 오른쪽 인덱스보다 작거나 같으며 왼쪽 인덱스가 마지막 인덱스에 닿지 않고, 왼쪽 인덱스의 값이 pivot보다 작으면
                left_index ++;                                                                            //왼쪽 인덱스의 값을 1 추가함 //**왼쪽 인덱스를 오른쪽으로 한칸 이동시킴.
            }
            while (left_index <= right_index && right_index > 0 && array[right_index] > pivot) { //왼쪽 인덱스가 오른쪽 인덱스보다 작거나 같으며 오른쪽 인덱스가 0보다 크고, 오른쪽 인덱스의 값이 pivot보다 크면
                right_index --;                                                                  //오른쪽 인덱스의 값을 1 추가함 //**오른쪽 인덱스를 왼쪽으로 한칸 이동시킴
            }
            if (left_index < right_index) {         //left_index와 right_index가 멈추었을 때 조건문 판독: 만약 left_index가 right_index보다 작다면
                int temp;                           //array[left_index]와 array[right_index]의 값을 바꿔준다.
                temp = array[left_index];
                array[left_index] = array[right_index];
                array[right_index] = temp;
            }                                      //만약 조건 벗어났다면?(left_index와 right_index가 교차) 다시 반복문 시작으로 돌아가서 조건에 맞지 않아 조건문 탈출

            if (left_index == last_index - 1 && left_index == right_index) {    //pivot이 배열에서 가장 큰 값을 차지하여 양분이 되지 않을때

                //**pivot 선정 : 이 때 pivot을 배열의 전체 크기에서 중간에 위치한 값과 pivot 위치인 가장 끝 값을 바꿔준다. 비록 바꿔준 뒤에도 값이 가장 클 확률이 있지만 이미 오른쪽에서 가장 큰 값이 있었기 때문에 중앙 지점에 극히 드물다고 생각한다. 양분이 정확히 효율적으로 되지 않더라도 최악의 경우를 피할수는 있다. 또한, 결국 배열의 크기가 커지면 배열 값의 중앙값을 찾는데도 많은 작업을 필요로 하는데 배열의 중간 위치의 값은 size/2을 통해 원하는 인덱스의 값을 한번에 찾을 수 있다. 그렇기 때문에 pivot이 극단적이어서 양분이 되지 않을 때, 중간 위치의 값과 가장 끝의 값을 바꿔준다.

                int mid = (last_index - start_index + 1) / 2;       //배열의 중간 인덱스을 나타내는 mid //배열의 중간 인덱스를 찾기 위해 전체 크기에서 /2를 해준다.

                int temp;                                       //temp를 통해 배열의 마지막 값과 중간값을 바꿔준다.
                temp = array[last_index];                       //array[last_index]값을 temp에 저장
                array[last_index] = array[last_index - mid];    //array[last_index - mid]값을 array[last_index]에 저장
                array[last_index - mid] = temp;                 //temp에 저장해둔 array[last_index]값을 array[last_index - mid]에 저장
            }
        }

        //left_index(큰 값을 뒤로 보내기 위함)와 pivot값인 last_index의 값을 바꿔줌
        int temp;                               //temp를 통해 left_index 위치의 값과 가장 끝에 위치한 last_index의 값을 바꿔준다.
        temp = array[left_index];               //array[left_index]값을 temp에 저장
        array[left_index] = array[last_index];  //array[last_index]값을 array[left_index]에 저장
        array[last_index] = temp;               //temp에 저장해둔 array[left_index]값을 [last_index]에 저장

        //배열을 pivot을 기준으로 양분한다. 코드 기준으로는 바로 위 코드에서 pivot값을 left_index에 넣었기 때문에 left_index를 기준으로 양분한다.
        if (left_index >= 1) { //조건문 if를 통해 만약 left_index가 아무런 이동을 하지 않아 1이상의 조건에 포함되지 못한다면 양분을 못하고 하나의 배열로 quick_sorting을 진행한다.
            quick_sorting(array, start_index, left_index - 1);  //범위 지정을 통해 시작부터 pivot값의 직전까지 quick_sorting으로 보내주고
        }
        quick_sorting(array, left_index + 1, last_index);       //범위 지정을 통해 pivot값의 직후부터 끝까지 quick_sorting으로 보내준다.
    }
}

void quick_sort(int* array, int size) { //quick_sort 함수 정의, 정수형 배열과, 정수형 변수를 parameter로 받음, return값 없음
    quick_sorting(array, 0, size - 1);  //quick_sorting함수 호출, 함수를 통해 받아온 array 배열과 시작인덱스 끝인덱스를 넘겨줌.
}


void pair_quick_sorting(keydata* array, int start_index, int last_index) {  //pair_quick_sorting 함수 정의
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

void pair_quick_sort(keydata* array, int size) {        //pair_quick_sort 함수 정의
    pair_quick_sorting(array, 0, size - 1);
}