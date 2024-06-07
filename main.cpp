#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle circle(5.0f);
	Rectangle rect(10, 50);

	circle.Size();
	circle.Draw();
	rect.Size();
	rect.Draw();

	return 0;
}