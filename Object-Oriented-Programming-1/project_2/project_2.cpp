#include<iostream>
#include<stdlib.h>
using namespace std;

struct book {		//book�̶�� ����ü ����
	int id;			//book ����ü �� int�� ���� id ����
	char name[30];	//book ����ü �� 30ĭ¥�� char�� �迭 name ����
	int inout;		//book ����ü �� int�� ���� inout ����, å�� �������� ������ 1, ������ -1
};

book books[10];		//books��� �迭�� 10ĭ���� ����鼭 �ִ� å 10������ ����

struct member {		//member��� ����ü ����
	int id;			//member ����ü �� int�� ���� id ����
	char name[30];	//member ����ü ��  30ĭ¥�� char�� �迭 name ����
};

member members[5];	//members��� �迭�� 5ĭ���� ����鼭 �ִ� ȸ�� 5������ ����

void book_show();	//book_show �Լ��� prototype. parameters, return �� ����.
void book_modi();	//book_modi �Լ��� prototype. parameters, return �� ����.
void book_remo();	//book_remo �Լ��� prototype. parameters, return �� ����.
void add_a_book();	//add_a_book �Լ��� prototype. parameters, return �� ����.
void mem_show();	//mem_show �Լ��� prototype. parameters, return �� ����.
void mem_modi();	//mem_modi �Լ��� prototype. parameters, return �� ����.
void mem_remo();	//mem_remo �Լ��� prototype. parameters, return �� ����.
void add_a_mem();	//add_a_mem �Լ��� prototype. parameters, return �� ����.
void borrow();		//borrow �Լ��� prototype. parameters, return �� ����.
void Return();		//Return �Լ��� prototype. parameters, return �� ����.

int main() {		//main�Լ� ����, return���� ������.

	while (1) {		//while�� ���� ����loop ����
		cout << "\n<menu>\n1.quit\n2.book show\n3.book modify\n4.book remove\n5.add a book\n6.member show\n7.member modify\n8.member remove\n9.add a member\n10.borrow\n11.return\nselect menu : ";
		//����� �� �ִ� �޴����� ��� ����.
		int input;			//�޴� ������ ���� ������ ���� input ����.
		cin >> input;		//cin�� ���� input�� �� �Է�
		switch (input) {	//input�� ���� ���� �Ʒ��� case���� ����

		case 1:				//input�� 1�� ��
			exit(1);		//���α׷� ����
			break;			//switch case�� Ż��

		case 2:				//input�� 2�� ��
			book_show();	//�Լ� book_show ����
			break;			//switch case�� Ż��

		case 3:				//input�� 3�� ��
			book_modi();	//�Լ� book_modi ����
			break;			//switch case�� Ż��

		case 4:				//input�� 4�� ��
			book_remo();	//�Լ� book_remo ����
			break;			//switch case�� Ż��

		case 5:				//input�� 5�� ��
			add_a_book();	//�Լ� add_a_book ����
			break;			//switch case�� Ż��

		case 6:				//input�� 6�� ��
			mem_show();		//�Լ� mem_show ����
			break;			//switch case�� Ż��

		case 7:				//input�� 7�� ��
			mem_modi();		//�Լ� mem_modi ����
			break;			//switch case�� Ż��

		case 8:				//input�� 8�� ��
			mem_remo();		//�Լ� mem_remo ����
			break;			//switch case�� Ż��

		case 9:				//input�� 9�� ��
			add_a_mem();	//�Լ� add_a_mem ����
			break;			//switch case�� Ż��

		case 10:			//input�� 10�� ��
			borrow();		//�Լ� borrow ����
			break;			//switch case�� Ż��

		case 11:			//input�� 11�� ��
			Return();		//�Լ� Return ����
			break;			//switch case�� Ż��
		
		default:			//�� ���� case�� ��
			break;			//switch case�� Ż��
		}
	}
	return 0;				//main�Լ��� int���̱� ������ 0�� return ����.
}

void book_show() {																		//book_show �Լ� ����. return�� ����, argument ����.
	for (int i = 0; i < 10; i++) {														//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
		cout << "å ID : " << books[i].id << ", å �̸� : " << books[i].name << endl;	//books[i].id�� books[i].name�� i�� 0~9�� �����ϸ鼭 �����.
	}
}

void book_modi() {							//book_modi �Լ� ����. return�� ����, argument ����.
	int before;								//������ ���� before ����
	cout << "������ �ʿ��� åID : ";		//�ش� ���� ���
	cin >> before;							//cin�� ���� before�� �� �Է�
	for (int i = 0; i < 10; i++) {			//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
		if (books[i].id == before) {		//if�� ���� ���ǹ�. books[i].id�� before�� ���� �� �Ʒ��� ����� ����.
			cout << "���ο� åID : ";		//�ش� ���� ���
			cin >> books[i].id;				//books[i].id�� ���� �Է�
			cout << "���ο� å�̸� : ";		//�ش� ���� ���
			cin >> books[i].name;			//books[i].name�� ���� �Է�
		}
	}
}

void book_remo() {							//book_remo �Լ� ����. return �� ����. argument ����.
	int before;								//������ ���� before ����
	cout << "������ å ID : ";				//�ش� ���� ���
	cin >> before;							//cin�� ���� before�� �� �Է�
	for (int i = 0; i < 10; i++) {			//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
		if (books[i].id == before) {		//���ǹ� if. books[i].id�� before�� ���� �� �Ʒ��� ����� ����.
			books[i] = { 0 , " " };			//books[i].id�� 0 �Է�, name���� ���� �Է�.
		}
	}
}

void add_a_book() {														//add_a_book �Լ� ����. return �� ����. argument ����.
	int i;																//������ ���� i ����.
	FILE* addbook = fopen("book.txt", "a+");							//addbook�̶�� �̸����� book.txt ������ �߰�, �б���� open
	for (i = 0; i < 10; i++) {											//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
		fscanf(addbook, "%d %s", &books[i].id, books[i].name);			//book.txt�� �ִ� ��, books[i].id�� books[i].name���� ������.
		if (books[i].id == 0){											//���ǹ� if. books[i].id�� 0�� ��, �� å ID�� �Է��� �� �Ǿ����� �� �Ʒ� ��� ����.
			cout << "å ID �Է� : ";									//�ش� ���� ���
			cin >> books[i].id;											//�Էµ��� ���� i�� books[i].id �Է�
			cout << "å �̸� �Է� : ";									//�ش� ���� ���
			cin >> books[i].name;										//�Էµ��� ���� i�� books[i].name �Է�
			fprintf(addbook, "\n%d %s", books[i].id, books[i].name);	//�Է��� books[i].id�� books[i].name�� book.txt�� ���
		}
	}
	printf("\n");														//�ٹٲ��� book.txt�� ���
	fclose(addbook);													//addbook�� �� ����Ͽ����� �ݾ���.
}

void mem_show() {																				//mem_show �Լ� ����. return�� ����, argument ����.
	for (int i = 0; i < 5; i++) {																//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		cout << "ȸ�� ID : " << members[i].id << ", ȸ�� �̸� : " << members[i].name << endl;	//members[i].id�� members[i].name�� i�� 0~5�� �����ϸ鼭 �����.
	}
}

void mem_modi() {								//mem_modi �Լ� ����. return�� ����, argument ����.
	int before;									//������ ���� before ����
	cout << "������ �ʿ��� ȸ�� ID : ";			//�ش� ���� ���
	cin >> before;								//cin�� ���� before�� �� �Է�
	for (int i = 0; i < 5; i++) {				//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		if (members[i].id == before) {			//if�� ���� ���ǹ�. members[i].id�� before�� ���� �� �Ʒ��� ����� ����.
			cout << "���ο� ȸ�� ID : ";		//�ش� ���� ���
			cin >> members[i].id;				//books[i].id�� ���� �Է�
			cout << "���ο� ȸ�� �̸� : ";		//�ش� ���� ���
			cin >> members[i].name;				//books[i].name�� ���� �Է�
		}
	}
}

void mem_remo() {
	int before;									//book_remo �Լ� ����. return �� ����. argument ����.
	cout << "������ ȸ�� ID : ";				//�ش� ���� ���
	cin >> before;								//cin�� ���� before�� �� �Է�
	for (int i = 0; i < 5; i++) {				//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		if (members[i].id == before) {			//���ǹ� if. members[i].id�� before�� ���� �� �Ʒ��� ����� ����.
			members[i] = { 0 , " " };			//members[i].id�� 0 �Է�, name���� ���� �Է�.
		}
	}
}

void add_a_mem() {														//add_a_mem �Լ� ����. return �� ����. argument ����.
	int i;																//������ ���� i ����.
	FILE* addmem = fopen("member.txt", "a+");							//addmem�̶�� �̸����� member.txt ������ �߰�, �б���� open
	for (i = 0; i < 5; i++) {											//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		fscanf(addmem, "%d %s", &members[i].id, members[i].name);		//member.txt�� �ִ� ��, members[i].id�� members[i].name���� ������.
		if (members[i].id == 0) {										//���ǹ� if. books[i].id�� 0�� ��, �� å ID�� �Է��� �� �Ǿ����� �� �Ʒ� ��� ����.
			cout << "ȸ�� ID �Է� : ";									//�ش� ���� ���
			cin >> members[i].id;										//�Էµ��� ���� i�� members[i].id �Է�
			cout << "ȸ�� �̸� �Է� : ";								//�ش� ���� ���
			cin >> members[i].name;										//�Էµ��� ���� i�� members[i].name �Է�
			fprintf(addmem, "\n%d %s", members[i].id, members[i].name);	//�Է��� members[i].id�� members[i].name�� member.txt�� ���
		}
	}
	printf("\n");														//�ٹٲ��� member.txt�� ���
	fclose(addmem);														//addmem�� �� ����Ͽ����� �ݾ���.
}

void borrow(){																	//borrow �Լ� ����. return �� ����. argument ����.
	int i, member_id, book_id;													//������ ���� i, member_id, book_id ����.

	FILE* borrow = fopen("manage.txt", "a");									//borrow��� �̸����� member.txt ������ �߰����� open
	cout << "ȸ�� ID : ";														//�ش� ���� ���
	cin >> member_id;															//cin�� ���� member_id�� �� �Է�
	for (i = 0; i < 5; i++) {													//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		if (member_id == members[i].id) {										//���ǹ� if. �Է��� member_id�� members[i].id�� ���� �� �Ʒ� ��� ����
			cout << "å ID : ";													//�ش� ���� ���
			cin >> book_id;														//cin�� ���� book_id�� �� �Է�

			if (books[i].inout == -1) {											//���ǹ� if. books[i].inout�� -1(�������� ����)�� �� �Ʒ� ��� ����
				cout << "å�� �������� �����ϴ�.\n";							//�ش� ���� ���
			}

			for (i = 0; i < 10; i++) {											//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
				if (book_id == books[i].id) {									//book_id�� books[i].id�� ���� �� �Ʒ� ��� ����
					books[i].inout = -1;										//�������� ������ books[i].inout�� -1�� ������.
				}
			}
		}
	}

	if (borrow != NULL) {														//���ǹ� if. borrow�� NULL�� �ƴ� �� �Ʒ� ��� ����
		fprintf(borrow, "�뿩�� ID : %d, �뿩å ID : %d\n", member_id, book_id);//�Է��� member_id�� book_id�� member.txt�� ���
	}
	fclose(borrow);																//borrow�� �� ����Ͽ����� �ݾ���.
}

void Return() {																			//Return �Լ� ����. return �� ����. argument ����.
	int i, member_id, book_id;															//������ ���� i, member_id, book_id ����.
	FILE* borrow = fopen("manage.txt", "a");											//borrow��� �̸����� member.txt ������ �߰����� open
	cout << "ȸ�� ID : ";																//�ش� ���� ���
	cin >> member_id;																	//cin�� ���� member_id�� �� �Է�


	for (i = 0; i < 5; i++) {															//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 5���� ���� ������ i�� 1�� ����.
		if (member_id == members[i].id) {												//���ǹ� if. �Է��� member_id�� members[i].id�� ���� �� �Ʒ� ��� ����
			cout << "å ID : ";															//�ش� ���� ���			
			cin >> book_id;																//cin�� ���� book_id�� �� �Է�	

			for (i = 0; i < 10; i++) {													//for loop, ������ ���� i ����, 0���� �Ҵ�, i�� 10���� ���� ������ i�� 1�� ����.
				if (book_id == books[i].id) {											//book_id�� books[i].id�� ���� �� �Ʒ� ��� ����	
					books[i].inout = 1;													//�ݳ��߱� ������ books[i].inout�� 1�� ������.
				}
			}
		}
	}
	if (borrow != NULL) {																//���ǹ� if. borrow�� NULL�� �ƴ� �� �Ʒ� ��� ����
		fprintf(borrow, "�ݳ��� ȸ�� ID : %d, �ݳ��� å ID : %d\n", member_id, book_id);//�Է��� member_id�� book_id�� member.txt�� ���
	}
	fclose(borrow);																		//borrow�� �� ����Ͽ����� �ݾ���.
}