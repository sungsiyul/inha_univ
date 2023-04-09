#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ofstream fp;
	ifstream fp2;
	char fname[20];
	int sid, count = 0;
	char name[20];
	float score, average, total = 0.0;

	cout << "enter the score file name : ";
	cin >> fname;

	fp.open(fname);

	if (fp.fail()) {
		cout << "can not open the " << fname << "file" << endl;
		exit(1);
	}

	while (1) {
		cout << "enter the sid, name, score : ";
		cin >> sid;
		if (sid < 0) break;
		cin >> name >> score;
		fp << sid << " " << name << " " << score << endl;
		//fp.put('a'); //cout처럼 사용
		//fp.write('abcd');
	}

	fp.close();

	fp2.open(fname);

	if (fp2.fail()) {
		cout << "can not open the " << fname << "file" << endl;
		exit(1);
	}

	while (1) {
		fp2 >> sid >> name >> score;
		if (fp2.eof()) break;
		cin >> name >> score;
		cout << sid << " " << name << " " << score << endl;
		total += score;
		count++;
	}
	average = total / count;
	cout << "average = " << average << endl;

	fp2.close();
	return 0;
}