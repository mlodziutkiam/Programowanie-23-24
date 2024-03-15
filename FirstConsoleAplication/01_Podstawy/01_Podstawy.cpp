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
		cout << "Obwód:" << calculatePerimeter() << "\n";
		cout << "Pole: " << calculateArea() << "\n";
		cout << "D³ugoœæ: " << length << "\n";
		cout << "Wysokoœæ: " << height << "\n";
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
Zdefiniuj klase opisuj¹ce konto bankowe. Mo¿liwoœci klasy:
* konstruktory
* metoda która dokona wp³aty na konto
* metoda która wyp³aty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mo¿liwoœci obiektu na podstawie tej klasy.
*/
