#pragma once
#include <iostream>
using namespace std;


template <typename T1, typename T2>
class Function
{
public:
	Function(T1 a, T2 b) :
		a_(a),
		b_(b) {}

	T1 ReturnMin(T1 a, T2 b) { return static_cast<T1>(a < b) ? a : b; };

private:
	T1 a_;
	T2 b_;
};