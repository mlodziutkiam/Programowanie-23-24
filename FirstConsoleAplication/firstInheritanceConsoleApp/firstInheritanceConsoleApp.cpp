#include <iostream>
using namespace std;

class C
{
protected:
	int fieldA;
	string name;

public:
	C()
	{
		fieldA = 15;
		name = "C";
	}

	C(int a, string n)
	{
		fieldA = a;
		name = n;
	}

	int GetFieldA()
	{
		return fieldA;
	}

	void ShowInfo()
	{
		cout << "Informacja na temat klasy " << name << "\n";
		cout << "Field A = " << fieldA << "\n";
	}
};

class A : public C
{
private:

public:
	A() :C(5, "A")
	{
		//fieldA = 5;
		//name = "A";
	}

	A(int a, string n)
	{
		fieldA = a;
		name = n;
	}
	/*
	void ShowInfo()
	{
	cout << "Informacja na temat klasy A\n";
		cout << "Field A = " << fieldA << "\n";
	}
	*/
};

class B : public C
{
private:
	int fieldB;

public:
	B() :C(10, "B")
	{
		//fieldA = 10;
		fieldB = 4;
		//name = "B";
	}

	int GetFieldB()
	{
		return fieldB;
	}
	/*
	void ShowInfo()
	{
		cout << "Informacja na temat klasy B\n";
		cout << "Field A = " << fieldA << "\n";
		cout << "Field B = " << fieldB << "\n";
	}
	*/
};

int main()
{
	A a;
	a.ShowInfo();

	B b;
	b.ShowInfo();

	C c;
	c.ShowInfo();
}