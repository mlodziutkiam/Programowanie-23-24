#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj�c� prostok�t. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra zw�rci obw�d prostok�ta
* metoda kt�ra pole prostok�ta
* metod� kt�ra poka�e informacje o prostok�cie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
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
		cout << "Obw�d:" << calculatePerimeter() << "\n";
		cout << "Pole: " << calculateArea() << "\n";
		cout << "D�ugo��: " << lenght << "\n";
		cout << "Wysoko��: " << height << "\n";
	}
};
