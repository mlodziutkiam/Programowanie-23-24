#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj¹c¹ prostok¹t. Mo¿liwoœci klasy:
* konstruktory
* metoda która zwórci obwód prostok¹ta
* metoda która pole prostok¹ta
* metodê która poka¿e informacje o prostok¹cie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
*/

class Rectangle {
private:
	float lenght;
	float height;

public:
	Rectangle(float l=1, float h=3)
	{
		l = lenght;
		h = height;
	}

	float calculatePerimeter() {
		return lenght * 2 + height * 2;
	}
	float calculateArea() {
		return lenght * height;
	}
	float rectangleInfo() {
		cout << "Obwód:" << calculatePerimeter() << "\n";
		cout << "Pole: " << calculateArea() << "\n";
		cout << "D³ugoœæ: " << lenght << "\n";
		cout << "Wysokoœæ: " << height << "\n";
	}
};
