#include <stdio.h>
#include <iostream>
#include "Function.h"
#include <random>

using namespace std;

int main() {

	random_device seed; // random device
	default_random_engine eng(seed());
	uniform_int_distribution<int> randInt(-250, 250);
	uniform_real_distribution<float> randFloat(-250.0f, 250.0f);
	uniform_real_distribution<double> randDouble(-250.0, 250.0);

	int numInt = randInt(eng);
	float numFloat = randFloat(eng);
	double numDouble = randDouble(eng);


	Function<int, float> func1(numInt, numFloat);

	cout << "Comparing int & float：" << endl;
	numInt = randInt(eng), numFloat = randFloat(eng);
	cout << "int = " << numInt << "	float = " << numFloat << endl;
	cout << "Min：" << func1.ReturnMin(numInt, numFloat) << "\n" << endl;

	Function<int, double> func2(numInt, numFloat);

	cout << "Comparing int & double：   " << endl;
	numInt = randInt(eng), numDouble = randDouble(eng);
	cout << "int = " << numInt << "	double = " << numDouble << endl;
	cout << "Min：" << func2.ReturnMin(numInt, numDouble) << "\n" << endl;

	Function<float, int> func3(numInt, numFloat);

	cout << "Comparing float & int：   " << endl;
	numFloat = randFloat(eng), numInt = randInt(eng);
	cout << "float = " << numFloat << "	int = " << numInt << endl;
	cout << "Min：" << func3.ReturnMin(numFloat, numInt) << "\n" << endl;

	Function<float, double> func4(numInt, numFloat);

	cout << "Comparing float & double：  " << endl;
	numFloat = randFloat(eng), numDouble = randDouble(eng);
	cout << "float = " << numFloat << "	double = " << numDouble << endl;
	cout << "Min：" << func4.ReturnMin(numFloat, numDouble) << "\n" << endl;

	Function<double, int> func5(numInt, numFloat);

	cout << "Comparing double & int：   " << endl;
	numDouble = randDouble(eng), numInt = randInt(eng);
	cout << "double = " << numDouble << "	int = " << numInt << endl;
	cout << "Min：" << func5.ReturnMin(numDouble, numInt) << "\n" << endl;

	Function<double, float> func6(numInt, numFloat);

	cout << "Comparing double & float：  " << endl;
	numDouble = randDouble(eng), numFloat = randFloat(eng);
	cout << "double = " << numDouble << "	float = " << numFloat << endl;
	cout << "Min：" << func6.ReturnMin(numDouble, numFloat) << "\n" << endl;

	return 0;
}