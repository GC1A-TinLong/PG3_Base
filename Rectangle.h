#pragma once
#include "IShape.h"
#define _USE_MATH_DEFINES
#include "cmath"
#include <iostream>

using namespace std;

class Rectangle :public IShape
{
public:
	Rectangle(int length,int width) :
		length_(length),width_(width) {}

	void Size() override;
	void Draw() override;

private:
	int length_;
	int width_;
};
