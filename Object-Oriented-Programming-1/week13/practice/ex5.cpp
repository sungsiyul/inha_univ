#include<iostream>
#include<fstream>
using namespace std;

int main() {

	FILE* fp = NULL;
	fopen_s(&fp, "sample.txt", "w");

	if (!fp)
		cout << "Fail" << endl;
	else
		cout << "success" << endl;
	fclose(fp);

	return 0;

	//fstream fp2;
	//fp2.open("sample_2.txt");
	//if (!fp2)
	//	cout << "Fail" << endl;
	//else
	//	cout << "success" << endl;
	//fp2.close();

	//return 0;

}