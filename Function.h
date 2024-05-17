#pragma once
#include <time.h>
#include <iostream>
using namespace std;


template <typename T1, typename T2, typename T3>
class Function
{
public:
	Function(T1 num_int, T2 num_float, T3 num_double) :
		num_int_(num_int),
		num_float_(num_float),
		num_double_(num_double) {}

	T1 ReturnMin_T1_T2(T1 a, T2 b) { return static_cast<T1>(a < b) ? a : b; };
	T1 ReturnMin_T1_T3(T1 a, T3 b) { return static_cast<T1>(a < b) ? a : b; };
	T2 ReturnMin_T2_T1(T2 a, T1 b) { return static_cast<T2>(a < b) ? a : b; };
	T2 ReturnMin_T2_T3(T2 a, T3 b) { return static_cast<T2>(a < b) ? a : b; };
	T3 ReturnMin_T3_T1(T3 a, T1 b) { return static_cast<T3>(a < b) ? a : b; };
	T3 ReturnMin_T3_T2(T3 a, T2 b) { return static_cast<T3>(a < b) ? a : b; };
private:
	T1 num_int_;
	T2 num_float_;
	T3 num_double_;
};