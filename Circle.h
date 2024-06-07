#pragma once
#include "IShape.h"
#define _USE_MATH_DEFINES
#include "cmath"
#include <iostream>

using namespace std;

class Circle:public IShape
{
public:
	Circle(float radius) :radius_(radius) {}

	void Size() override;
	void Draw() override;

private:
	float radius_;
};

