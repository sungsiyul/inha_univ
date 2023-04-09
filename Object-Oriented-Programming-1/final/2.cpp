#include <iostream>
#include<iomanip>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main()
{
	FILE* fp = NULL;
	fp = fopen("student.txt", "r");

	if (fp == NULL)
	{
		cout << "error!" << endl;
		exit(1);
	}

	int id;
	char name[20];
	float kor_tot = 0, eng_tot = 0, mat_tot = 0;
	int kor, eng, mat, a_kor, a_eng, a_mat, max_eng, max_mat, max_kor;
	

	for (int i = 0; i < 11; i++)
	{
		fscanf(fp, "%d %s %d %d %d", &id, name, &eng, &mat, &kor);

		if (i == 0) {
			a_kor = kor;
			a_eng = eng;
			a_mat = mat;
		}

		kor_tot += kor;
		eng_tot += eng;
		mat_tot += mat;

		if (a_kor > kor) {
			max_kor = a_kor;
		}

		if (a_eng > eng) {
			max_eng = a_eng;
		}

		if (a_mat > mat) {
			max_mat = a_mat;
		}

	}
	float avg_kor = kor_tot / 12.0;
	float avg_eng = eng_tot / 12.0;
	float avg_mat = mat_tot / 12.0;


	cout <<"MeanEng :  " << avg_eng << endl;
	cout <<"MeanMath :  " << avg_mat << endl;
	cout <<"MeanKor :  " << avg_kor << endl;
	cout <<"MaxEng :  " << max_eng << endl;
	cout <<"MaxMath :  " << max_mat << endl;
	cout <<"MaxKor :  " << max_kor << endl;

	fclose(fp);


	FILE* fp2 = NULL;
	fp2 = fopen("evaluation.txt", "w");
	fprintf(fp, "MeanEng : %.3f MeanMath: %.3f MeanKor %.3f\nMaxEng %.3f MaxMat %.3f MaxKor %.3f",
		avg_eng, avg_mat, avg_kor, (float)max_eng, (float)max_mat, (float)max_kor);

}