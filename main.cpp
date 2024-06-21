#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* circle = new Circle(5.0f);
	IShape* rect = new Rectangle(10, 50);

	circle->Size();
	circle->Draw();
	rect->Size();
	rect->Draw();

	delete circle;
	delete rect;

	return 0;
}