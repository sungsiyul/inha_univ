#include<iostream>
#include<stdlib.h>
using namespace std;

struct book {		//book이라는 구조체 생성
	int id;			//book 구조체 속 int형 변수 id 생성
	char name[30];	//book 구조체 속 30칸짜리 char형 배열 name 생성
	int inout;		//book 구조체 속 int형 변수 inout 생성, 책이 도서관에 있으면 1, 없으면 -1
};

book books[10];		//books라는 배열을 10칸으로 만들면서 최대 책 10권으로 설정

struct member {		//member라는 구조체 생성
	int id;			//member 구조체 속 int형 변수 id 생성
	char name[30];	//member 구조체 속  30칸짜리 char형 배열 name 생성
};

member members[5];	//members라는 배열을 5칸으로 만들면서 최대 회원 5명으로 설정

void book_show();	//book_show 함수의 prototype. parameters, return 값 없음.
void book_modi();	//book_modi 함수의 prototype. parameters, return 값 없음.
void book_remo();	//book_remo 함수의 prototype. parameters, return 값 없음.
void add_a_book();	//add_a_book 함수의 prototype. parameters, return 값 없음.
void mem_show();	//mem_show 함수의 prototype. parameters, return 값 없음.
void mem_modi();	//mem_modi 함수의 prototype. parameters, return 값 없음.
void mem_remo();	//mem_remo 함수의 prototype. parameters, return 값 없음.
void add_a_mem();	//add_a_mem 함수의 prototype. parameters, return 값 없음.
void borrow();		//borrow 함수의 prototype. parameters, return 값 없음.
void Return();		//Return 함수의 prototype. parameters, return 값 없음.

int main() {		//main함수 실행, return값은 정수형.

	while (1) {		//while을 통한 무한loop 생성
		cout << "\n<menu>\n1.quit\n2.book show\n3.book modify\n4.book remove\n5.add a book\n6.member show\n7.member modify\n8.member remove\n9.add a member\n10.borrow\n11.return\nselect menu : ";
		//사용할 수 있는 메뉴들을 모두 생성.
		int input;			//메뉴 선택을 위한 정수형 변수 input 생성.
		cin >> input;		//cin을 통해 input의 값 입력
		switch (input) {	//input의 값에 따라 아래의 case들을 실행

		case 1:				//input이 1일 때
			exit(1);		//프로그램 종료
			break;			//switch case문 탈출

		case 2:				//input이 2일 때
			book_show();	//함수 book_show 실행
			break;			//switch case문 탈출

		case 3:				//input이 3일 때
			book_modi();	//함수 book_modi 실행
			break;			//switch case문 탈출

		case 4:				//input이 4일 때
			book_remo();	//함수 book_remo 실행
			break;			//switch case문 탈출

		case 5:				//input이 5일 때
			add_a_book();	//함수 add_a_book 실행
			break;			//switch case문 탈출

		case 6:				//input이 6일 때
			mem_show();		//함수 mem_show 실행
			break;			//switch case문 탈출

		case 7:				//input이 7일 때
			mem_modi();		//함수 mem_modi 실행
			break;			//switch case문 탈출

		case 8:				//input이 8일 때
			mem_remo();		//함수 mem_remo 실행
			break;			//switch case문 탈출

		case 9:				//input이 9일 때
			add_a_mem();	//함수 add_a_mem 실행
			break;			//switch case문 탈출

		case 10:			//input이 10일 때
			borrow();		//함수 borrow 실행
			break;			//switch case문 탈출

		case 11:			//input이 11일 때
			Return();		//함수 Return 실행
			break;			//switch case문 탈출
		
		default:			//이 외의 case일 때
			break;			//switch case문 탈출
		}
	}
	return 0;				//main함수가 int형이기 때문에 0을 return 해줌.
}

void book_show() {																		//book_show 함수 정의. return값 없음, argument 없음.
	for (int i = 0; i < 10; i++) {														//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
		cout << "책 ID : " << books[i].id << ", 책 이름 : " << books[i].name << endl;	//books[i].id와 books[i].name을 i가 0~9씩 증가하면서 출력함.
	}
}

void book_modi() {							//book_modi 함수 정의. return값 없음, argument 없음.
	int before;								//정수형 변수 before 선언
	cout << "수정이 필요한 책ID : ";		//해당 문장 출력
	cin >> before;							//cin을 통해 before의 값 입력
	for (int i = 0; i < 10; i++) {			//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
		if (books[i].id == before) {		//if를 통한 조건문. books[i].id와 before이 같을 때 아래의 블록을 실행.
			cout << "새로운 책ID : ";		//해당 문장 출력
			cin >> books[i].id;				//books[i].id를 직접 입력
			cout << "새로운 책이름 : ";		//해당 문장 출력
			cin >> books[i].name;			//books[i].name을 직접 입력
		}
	}
}

void book_remo() {							//book_remo 함수 정의. return 값 없음. argument 없음.
	int before;								//정수형 변수 before 선언
	cout << "제거할 책 ID : ";				//해당 문장 출력
	cin >> before;							//cin을 통해 before의 값 입력
	for (int i = 0; i < 10; i++) {			//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
		if (books[i].id == before) {		//조건문 if. books[i].id와 before이 같을 때 아래의 블록을 실행.
			books[i] = { 0 , " " };			//books[i].id에 0 입력, name에는 공백 입력.
		}
	}
}

void add_a_book() {														//add_a_book 함수 정의. return 값 없음. argument 없음.
	int i;																//정수형 변수 i 선언.
	FILE* addbook = fopen("book.txt", "a+");							//addbook이라는 이름으로 book.txt 파일을 추가, 읽기모드로 open
	for (i = 0; i < 10; i++) {											//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
		fscanf(addbook, "%d %s", &books[i].id, books[i].name);			//book.txt에 있는 수, books[i].id와 books[i].name으로 가져옴.
		if (books[i].id == 0){											//조건문 if. books[i].id가 0일 때, 즉 책 ID가 입력이 안 되어있을 때 아래 블록 실행.
			cout << "책 ID 입력 : ";									//해당 문장 출력
			cin >> books[i].id;											//입력되지 않은 i의 books[i].id 입력
			cout << "책 이름 입력 : ";									//해당 문장 출력
			cin >> books[i].name;										//입력되지 않은 i의 books[i].name 입력
			fprintf(addbook, "\n%d %s", books[i].id, books[i].name);	//입력한 books[i].id와 books[i].name를 book.txt에 출력
		}
	}
	printf("\n");														//줄바꿈을 book.txt에 출력
	fclose(addbook);													//addbook을 다 사용하였으니 닫아줌.
}

void mem_show() {																				//mem_show 함수 정의. return값 없음, argument 없음.
	for (int i = 0; i < 5; i++) {																//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		cout << "회원 ID : " << members[i].id << ", 회원 이름 : " << members[i].name << endl;	//members[i].id와 members[i].name을 i가 0~5씩 증가하면서 출력함.
	}
}

void mem_modi() {								//mem_modi 함수 정의. return값 없음, argument 없음.
	int before;									//정수형 변수 before 선언
	cout << "수정이 필요한 회원 ID : ";			//해당 문장 출력
	cin >> before;								//cin을 통해 before의 값 입력
	for (int i = 0; i < 5; i++) {				//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		if (members[i].id == before) {			//if를 통한 조건문. members[i].id와 before이 같을 때 아래의 블록을 실행.
			cout << "새로운 회원 ID : ";		//해당 문장 출력
			cin >> members[i].id;				//books[i].id를 직접 입력
			cout << "새로운 회원 이름 : ";		//해당 문장 출력
			cin >> members[i].name;				//books[i].name를 직접 입력
		}
	}
}

void mem_remo() {
	int before;									//book_remo 함수 정의. return 값 없음. argument 없음.
	cout << "제거할 회원 ID : ";				//해당 문장 출력
	cin >> before;								//cin을 통해 before의 값 입력
	for (int i = 0; i < 5; i++) {				//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		if (members[i].id == before) {			//조건문 if. members[i].id와 before이 같을 때 아래의 블록을 실행.
			members[i] = { 0 , " " };			//members[i].id에 0 입력, name에는 공백 입력.
		}
	}
}

void add_a_mem() {														//add_a_mem 함수 정의. return 값 없음. argument 없음.
	int i;																//정수형 변수 i 선언.
	FILE* addmem = fopen("member.txt", "a+");							//addmem이라는 이름으로 member.txt 파일을 추가, 읽기모드로 open
	for (i = 0; i < 5; i++) {											//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		fscanf(addmem, "%d %s", &members[i].id, members[i].name);		//member.txt에 있는 수, members[i].id와 members[i].name으로 가져옴.
		if (members[i].id == 0) {										//조건문 if. books[i].id가 0일 때, 즉 책 ID가 입력이 안 되어있을 때 아래 블록 실행.
			cout << "회원 ID 입력 : ";									//해당 문장 출력
			cin >> members[i].id;										//입력되지 않은 i의 members[i].id 입력
			cout << "회원 이름 입력 : ";								//해당 문장 출력
			cin >> members[i].name;										//입력되지 않은 i의 members[i].name 입력
			fprintf(addmem, "\n%d %s", members[i].id, members[i].name);	//입력한 members[i].id와 members[i].name를 member.txt에 출력
		}
	}
	printf("\n");														//줄바꿈을 member.txt에 출력
	fclose(addmem);														//addmem을 다 사용하였으니 닫아줌.
}

void borrow(){																	//borrow 함수 정의. return 값 없음. argument 없음.
	int i, member_id, book_id;													//정수형 변수 i, member_id, book_id 선언.

	FILE* borrow = fopen("manage.txt", "a");									//borrow라는 이름으로 member.txt 파일을 추가모드로 open
	cout << "회원 ID : ";														//해당 문장 출력
	cin >> member_id;															//cin을 통해 member_id의 값 입력
	for (i = 0; i < 5; i++) {													//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		if (member_id == members[i].id) {										//조건문 if. 입력한 member_id와 members[i].id가 같을 때 아래 블록 실행
			cout << "책 ID : ";													//해당 문장 출력
			cin >> book_id;														//cin을 통해 book_id의 값 입력

			if (books[i].inout == -1) {											//조건문 if. books[i].inout이 -1(도서관에 없음)일 때 아래 블록 실행
				cout << "책이 도서관에 없습니다.\n";							//해당 문장 출력
			}

			for (i = 0; i < 10; i++) {											//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
				if (book_id == books[i].id) {									//book_id와 books[i].id가 같을 때 아래 블록 실행
					books[i].inout = -1;										//빌려갔기 때문에 books[i].inout을 -1로 설정함.
				}
			}
		}
	}

	if (borrow != NULL) {														//조건문 if. borrow가 NULL이 아닐 때 아래 블록 실행
		fprintf(borrow, "대여자 ID : %d, 대여책 ID : %d\n", member_id, book_id);//입력한 member_id와 book_id를 member.txt에 출력
	}
	fclose(borrow);																//borrow를 다 사용하였으니 닫아줌.
}

void Return() {																			//Return 함수 정의. return 값 없음. argument 없음.
	int i, member_id, book_id;															//정수형 변수 i, member_id, book_id 선언.
	FILE* borrow = fopen("manage.txt", "a");											//borrow라는 이름으로 member.txt 파일을 추가모드로 open
	cout << "회원 ID : ";																//해당 문장 출력
	cin >> member_id;																	//cin을 통해 member_id의 값 입력


	for (i = 0; i < 5; i++) {															//for loop, 정수형 변수 i 선언, 0으로 할당, i가 5보다 작을 때까지 i에 1씩 더함.
		if (member_id == members[i].id) {												//조건문 if. 입력한 member_id와 members[i].id가 같을 때 아래 블록 실행
			cout << "책 ID : ";															//해당 문장 출력			
			cin >> book_id;																//cin을 통해 book_id의 값 입력	

			for (i = 0; i < 10; i++) {													//for loop, 정수형 변수 i 선언, 0으로 할당, i가 10보다 작을 때까지 i에 1씩 더함.
				if (book_id == books[i].id) {											//book_id와 books[i].id가 같을 때 아래 블록 실행	
					books[i].inout = 1;													//반납했기 때문에 books[i].inout을 1로 설정함.
				}
			}
		}
	}
	if (borrow != NULL) {																//조건문 if. borrow가 NULL이 아닐 때 아래 블록 실행
		fprintf(borrow, "반납한 회원 ID : %d, 반납한 책 ID : %d\n", member_id, book_id);//입력한 member_id와 book_id를 member.txt에 출력
	}
	fclose(borrow);																		//borrow를 다 사용하였으니 닫아줌.
}