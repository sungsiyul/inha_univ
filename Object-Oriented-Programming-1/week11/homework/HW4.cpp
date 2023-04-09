#include<iostream>
using namespace std;

enum menu{load=1, show, best_score, male_students, female_students, change};

struct student {
	char name[20];
	int id;
	char sex;
	int kor, eng, math;
};

void main() {

	struct student std[5];

	enum menu select;

	for(;;){

		cout << "1. load 2. show 3. best score 4. male students 5. female students 6. change\nselect menu\n";
		
		int input;
		cin >> input;
		select = static_cast<menu>(input);

		if (select == 0) break;

		switch (select)
		{
			case load:
			{
				cout << "\nenter name, id, sex, kor, eng, math for 5 students\n";
				for (int i = 0; i < 5; i++) {
					cout << "stdent " << i + 1 << ": ";
					cin >> std[i].name >> std[i].id >> std[i].sex >> std[i].kor >> std[i].eng >> std[i].math;
				}
				break;
			}

			case show:
			{
				cout << "\nnow displaying the students\n";
				for (int i = 0; i < 5; i++) {
					cout << "student " << i + 1 << endl;
					cout << "  name: " << std[i].name << ", student ID: " << std[i].id << ", sex: " << std[i].sex << endl;
					cout << "  kor score: " << std[i].kor << ", eng score: " << std[i].eng << ", math score: " << std[i].math << endl;
				}
				cout << endl;
				break;
			}

			case best_score:
			{
				cout << endl;
				int best_kor = 0, k;
				for (int i = 0; i < 5; i++) {
					if (best_kor < std[i].kor) {
						best_kor = std[i].kor;
						k = i;
					}
				}
				cout << "best score for korean: " << std[k].name << " " << std[k].kor << endl;

				int best_eng = 0, e;
				for (int i = 0; i < 5; i++) {
					if (best_eng < std[i].eng) {
						best_eng = std[i].eng;
						e = i;
					}
				}
				cout << "best score for english: " << std[e].name << " " << std[e].eng << endl;

				int best_math = 0, m;
				for (int i = 0; i < 5; i++) {
					if (best_math < std[i].math) {
						best_math = std[i].math;
						m = i;
					}
				}
				cout << "best score for math: " << std[m].name << " " << std[m].math << endl;

				cout << endl;
				break;
			}

			case male_students:
			{
				cout << "\nMale students data\n";
				for (int i = 0; i < 5; i++) {
					if (std[i].sex == 'M') {
						cout << std[i].name << " " << std[i].id << " " << std[i].sex << " " << std[i].kor << " " << std[i].eng << " " << std[i].math << endl;
					}
				}
				cout << endl;
				break;
			}

			case female_students:
			{
				cout << "\nFemale students data\n";
				for (int i = 0; i < 5; i++) {
					if (std[i].sex == 'F') {
						cout << std[i].name << " " << std[i].id << " " << std[i].sex << " " << std[i].kor << " " << std[i].eng << " " << std[i].math << endl;
					}
				}
				cout << endl;
				break;
			}

				case change:
				{
					cout << "\nenter student ID: ";
					int change_id;
					cin >> change_id;
					for (int i = 0; i < 5; i++) {
						if (change_id == std[i].id)
							cin >> std[i].name >> std[i].id >> std[i].sex >> std[i].kor >> std[i].eng >> std[i].math;
					}
					cout << endl;
					break;
				}
		}
	}
}