#include <stdio.h>
#include <iostream>
#include "Function.h"
#include <time.h>
using namespace std;

int main() {

	int ran_int = 10;
	float ran_float = 20.0f;
	double ran_double = 30.0;
	srand(unsigned int(time(nullptr)));

	Function<int, float, double> func(ran_int, ran_float, ran_double);

	cout << "Comparing int & float：" << endl;
	ran_int = rand() / 500, ran_float = rand() / 500.0f;
	cout << "int = " << ran_int << "	float = " << ran_float << endl;
	cout << "Min：" << func.ReturnMin_T1_T2(ran_int, ran_float) << endl;

	cout << "Comparing int & double：   " << endl;
	ran_int = rand() / 500, ran_double = rand() / 500.0;
	cout << "int = " << ran_int << "	double = " << ran_double << endl;
	cout << "Min：" << func.ReturnMin_T1_T3(ran_int, ran_double) << endl;

	cout << "Comparing float & int：   " << endl;
	ran_float = rand() / 500.0f, ran_int = rand() / 500;
	cout << "float = " << ran_float << "	int = " << ran_int << endl;
	cout << "Min：" << func.ReturnMin_T2_T1(ran_float, ran_int) << endl;

	cout << "Comparing float & double：  " << endl;
	ran_float = rand() / 500.0f, ran_double = rand() / 500.0;
	cout << "float = " << ran_float << "	double = " << ran_double << endl;
	cout << "Min：" << func.ReturnMin_T2_T3(ran_float, ran_double) << endl;

	cout << "Comparing double & int：   " << endl;
	ran_double = rand() / 500.0, ran_int = rand() / 500;
	cout << "double = " << ran_double << "	int = " << ran_int << endl;
	cout << "Min：" << func.ReturnMin_T3_T1(ran_double, ran_int) << endl;

	cout << "Comparing double & float：  " << endl;
	ran_double = rand() / 500.0, ran_float = rand() / 500.0f;
	cout << "double = " << ran_double << "	float = " << ran_float << endl;
	cout << "Min：" << func.ReturnMin_T3_T2(ran_double, ran_float) << endl;

	return 0;
}