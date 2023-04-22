#include <chrono>       //chrono 라이브러리의 기능 사용 가능 //**시작시간과 끝시간 측정을 위해 chorono 라이브러리 사용
#include <stdlib.h>     //stdlib.h 라이브러리의 기능 사용 가능 //**배열의 값을 랜덤으로 배치하기 위해 stdlib.h 사용
#include <time.h>       //time.h 라이브러리의 기능 사용 가능 //**배열의 값을 랜덤으로 배치하기 위해 time.h 사용
using namespace std;    //기능 사용시 std:: 생략 가능

#include "sorting.h"    //sorting.h의 기능 사용 가능
#include "keydata.h"    //keydata.h의 기능 사용 가능

void sorting();         //sorting()함수 프로토타입.
void stable();          //stable()함수 프로토타입.
void performance(int);  //performance()함수 프로토타입.

void print_array(const int* array, int size);   //print_array()함수 프로토타입.
void print_pair(const keydata* array, int size);//print_pair()함수 프로토타입.

int random_av[100000000];   //정렬의 성능을 검증할 때 사용할 엄청 큰 배열 생성
int test_av[100000000];     //정렬의 성능을 검증할 때 사용할 엄청 큰 배열 생성

int main() {        //main()함수


	cout << "정상 동작 검사\n";   //출력문 출력
    sorting();                    //sorting함수 호출
    cout << endl;                 //줄바꿈 출력

    cout << "안정성 검사\n";        //출력문 출력
    stable();                       //stable함수 호출
    cout << endl;                   //줄바꿈 출력

    cout << "성능 비교\n";          //출력문 출력
    performance(100);               //performation 함수 호출, 정수 100을 함수로 넘겨줌
    performance(1000);              //performation 함수 호출, 정수 1000을 함수로 넘겨줌
    performance(10000);             //performation 함수 호출, 정수 10000을 함수로 넘겨줌
    performance(100000);            //performation 함수 호출, 정수 100000을 함수로 넘겨줌
    performance(1000000);           //performation 함수 호출, 정수 1000000을 함수로 넘겨줌
    cout << endl;                   //줄바꿈 출력
    
    cout << "12180626 성시열" << endl; //학번, 이름 출력

    return 0;       //반환형이 int이므로 0 return.
}

void sorting() {        //sorting함수 정의, parameter없음, return 없음. //**문제 당 함수 하나로 묶어 main함수를 깔끔하게 만듬.
    int size = 16;      //정수형 변수 size 생성과 동시에 16으로 지정
    int* S = new int[size] { 32, 29, 49, 30, 22, 69, 14, 55, 70, 99, 23, 52, 78, 45, 26, 10 };  //크기가 16인 S라는 동적배열 생성하고, 생성과 동시에 값 초기화
    cout << "            초기배열             : ";      //출력문 출력
    print_array(S, size);                               //print_array함수 호출
    cout << endl << endl;                               //줄바꿈 출력

    int* test = new int[size];                          //크기가 size인 정수형 배열 test를 통적 할당함.
                                                        
    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for문을 통해 S 배열에 있는 값을 test배열로 대입.
    insertion_sort(test, size);                         //insertion_sort 함수 호출
    cout << "삽입정렬(insertion sort) 후 배열 : ";      //출력문 출력
    print_array(test, size);                            //print_array함수 호출
    cout << endl;                                       //줄바꿈 출력

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for문을 통해 S 배열에 있는 값을 test배열로 대입.
    selection_sort(test, size);                         //selection_sort 함수 호출
    cout << "선택정렬(selection sort) 후 배열 : ";      //출력문 출력
    print_array(test, size);                            //print_array 함수 호출
    cout << endl;                                       //줄바꿈 출력

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for문을 통해 S 배열에 있는 값을 test배열로 대입.
    merge_sort(test, size);                             //merge_sort 함수 호출
    cout << "합병정렬(merge sort) 후 배열     : ";      //출력문 출력
    print_array(test, size);                            //print_array 함수 호출
    cout << endl;                                       //줄바꿈 출력

    for (int i = 0; i < size; i++) { test[i] = S[i]; }  //for문을 통해 S 배열에 있는 값을 test배열로 대입.
    quick_sort(test, size);                             //merge_sort 함수 호출
    cout << "빠른정렬(quick sort) 후 배열     : ";      //출력문 출력
    print_array(test, size);                            //print_array 함수 호출
    cout << endl;                                       //줄바꿈 출력

    delete[] S;                                         //new를 통해 생성한 배열 S를 소멸시킴//**정렬이 정상작동함을 확인하기 위해 만들어준 배열 S와 test를 delete[]를 통해 소멸시킴
    delete[] test;                                      //new를 통해 생성한 배열 test를 소멸시킴
}

void stable() {             //stable함수 정의, parameter 없음, return 없음.
    keydata pair[10] = {    //kedata 형태의 값으로 이루어진 10칸의 배열 pair을 생성하고 값을 초기화함.
     keydata('a', 3),       //**1부터 5까지 2개씩 총 10개로 이루어져 있으며 같은 숫자도 구분하기 위해 알파벳(key)을 붙임.
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
    int size = sizeof(pair) / sizeof(*pair);  //배열의 전체 크기(80) / 배열 한칸의 크기(8)

    keydata test_pair[10];  //크기가 10인 keydata형 배열 test를 생성.

    cout << "         key(data) 배열          : ";      //출력문 출력
    print_pair(pair, size);                             //print_pair 함수 호출
    cout << endl << endl;                               //줄바꿈 출력

    copy(pair, pair + size, test_pair);                 //copy를 통해 pair 배열의 처음부터 끝까지의 값을 test_pair의 처음부터 차례대로 대입한다.
    pair_insertion_sort(test_pair, size);               //pair_insertion_sort 함수 호출
    cout << "삽입정렬(insertion sort) 후 배열 : ";      //출력문 출력
    print_pair(test_pair, size);                        //print_pair 함수 호출
    cout << endl;                                       //줄바꿈 출력

    copy(pair, pair + size, test_pair);                 //copy를 통해 pair 배열의 처음부터 끝까지의 값을 test_pair의 처음부터 차례대로 대입한다.
    pair_selection_sort(test_pair, size);               //pair_seleciton_sort 함수 호출
    cout << "선택정렬(selection sort) 후 배열 : ";      //출력문 출력
    print_pair(test_pair, size);                        //print_pair 함수 호출
    cout << endl;                                       //줄바꿈 출력

    copy(pair, pair + size, test_pair);                 //copy를 통해 pair 배열의 처음부터 끝까지의 값을 test_pair의 처음부터 차례대로 대입한다.
    pair_merge_sort(test_pair, size);                   //pair_merge_sort 함수 호출
    cout << "합병정렬(merge sort) 후 배열     : ";      //출력문 출력
    print_pair(test_pair, size);                        //print_pair 함수 호출
    cout << endl;                                       //줄바꿈 출력

    copy(pair, pair + size, test_pair);                 //copy를 통해 pair 배열의 처음부터 끝까지의 값을 test_pair의 처음부터 차례대로 대입한다.
    pair_quick_sort(test_pair, size);                   //pair_quick_sort 함수 호출
    cout << "빠른정렬(quick sort) 후 배열 :     ";      //출력문 출력
    print_pair(test_pair, size);                        //print_pair 함수 호출
    cout << endl;                                       //줄바꿈 출력
}

void create_random_av(int size) {           //create_random_av 함수 실행, 받아온 정수를 함수 내에서 size로 사용
    int* random_av = new int[size];         //받아온 크기만큼 정수형 배열 random_av를 동적 할당함.
    srand((int)time(NULL));                 //srand와 time을 통해 난수를 생성
    for (int i = 0; i < size; i++) {        //for문을 통해 0~size-1까지
        random_av[i] = rand() % 100;        //동적할당한 배열 random_av[i]에 0~99까지의 숫자를 랜덤으로 대입.
    }
}


void performance(int size) {   //performance 함수 호출, 받아온 parameter는 size로 사용           
    
    create_random_av(size);     //create_random_av 함수를 호출하고 받아온 정수를 넘겨줌

    chrono::system_clock::time_point start_time, end_time; //시작시간과 끝시간을 기록하기 위한 변수 start_time, end_time
    cout << "크기 (" << size << ")   \n";                  //size 출력
    
    copy(random_av, random_av + size, test_av);  //random_av를 test_av에 대입
    start_time = chrono::system_clock::now();   //시작시간을 start_time에 저장  //**함수 시작 전과 후에 시간을 측정한 뒤 그 값을 빼서 걸린 시간을 측정한다. 값은 ns단위로 측정된다.
    insertion_sort(test_av, size);              //시작시간이 측정된 뒤 insertion_sort 함수 실행
    end_time = chrono::system_clock::now();     //함수 실행이 끝난 뒤 그 시간을 end_time에 저장
    cout << "insertion sort 경과 시간: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //시작시간과 끝 시간의 차이를 출력한다.


    copy(random_av, random_av + size, test_av); //random_av를 test_av에 대입
    start_time = chrono::system_clock::now();   //시작시간을 start_time에 저장  
    selection_sort(test_av, size);              //시작시간이 측정된 뒤 selection_sort 함수 실행
    end_time = chrono::system_clock::now();     //함수 실행이 끝난 뒤 그 시간을 end_time에 저장
    cout << "selection sort 경과 시간: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //시작시간과 끝 시간의 차이를 출력한다.

    copy(random_av, random_av + size, test_av); //random_av를 test_av에 대입
    start_time = chrono::system_clock::now();   //시작시간을 start_time에 저장  
    merge_sort(test_av, size);                  //시작시간이 측정된 뒤 merge_sort 함수 실행
    end_time = chrono::system_clock::now();     //함수 실행이 끝난 뒤 그 시간을 end_time에 저장
    cout << "merge sort 경과 시간: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //시작시간과 끝 시간의 차이를 출력한다.

    //**코드 실행시 출력되지 않음.
    //copy(random_av, random_av + size, test_av);   //random_av를 test_av에 대입
    //start_time = chrono::system_clock::now();     //시작시간을 start_time에 저장  
    //quick_sort(test_av, size);                    //시작시간이 측정된 뒤 quick_sort 함수 실행
    //end_time = chrono::system_clock::now();       //함수 실행이 끝난 뒤 그 시간을 end_time에 저장
    //cout << "quick sort 경과 시간: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << "ns" << endl; //시작시간과 끝 시간의 차이를 출력한다.

}

void print_array(const int* array, int size) {      //배열을 출력해주는 print_array함수, 정수형 배열과 정수를 parameter로 받음
    for (int i = 0; i < size; i += 1) {             //for문, 0부터 size-1까지
        cout << array[i] << ' ';                    //배열의 모든 값을 출력
    }
}

void print_pair(const keydata* array, int size) {                   //keydata의 배열을 출력해주는 print_pair함수, keydata형 배열과 정수를 parameter로 받음
    for (int i = 0; i < size; i += 1) {                             //for문, 0부터 size-1까지
        cout << array[i].key << '(' << array[i].data << ')' << ' '; //원소의 key와 data를 모두 출력함.
    }
}