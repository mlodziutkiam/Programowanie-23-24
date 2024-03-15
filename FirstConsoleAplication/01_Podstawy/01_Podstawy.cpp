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
	float length;
	float height;

public:
	Rectangle(float l=1, float h=3)
	{
		l = length;
		h = height;
	}

	float calculatePerimeter() {
		return length * 2 + height * 2;
	}
	float calculateArea() {
		return length * height;
	}
	float rectangleInfo() {
		cout << "Obw�d:" << calculatePerimeter() << "\n";
		cout << "Pole: " << calculateArea() << "\n";
		cout << "D�ugo��: " << length << "\n";
		cout << "Wysoko��: " << height << "\n";
	}
};

class BankAccount {
	float balance = 1000;

public:
	void showBalance() {
		cout<< "Account balance: "  << balance;
	}
	void depositMoney() {
		double deposit;
		cout << "How much money would you like to deposit?\n";
		cin >> deposit;
		balance += deposit;
		cout << "New account balance: " << balance;
}
	void withdrawMoney() {
		double withdraw;
		while(true){
			cout << "How much money would you like to withdraw?\n";
			cin >> withdraw;
			if (withdraw > balance) {
				cout << "Not enough funds!\n";
				continue;
			}
			else {
				balance -= withdraw;
				cout << "Withdrawal succeed. New Account balance: " << balance;
				break;
			}
		}
	}
	void transferMoney() {

	}
	


	
};


int main() {
	BankAccount firstAccount;
	
	firstAccount.withdrawMoney();

	
}


/*
ZADANIE
Zdefiniuj klase opisuj�ce konto bankowe. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra dokona wp�aty na konto
* metoda kt�ra wyp�aty z konta
* metoda kt�ra wykona przelew na inne konto
* metod� kt�ra poka�e informacje o koncie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
*/
