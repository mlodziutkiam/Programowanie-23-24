#include <iostream>
using namespace std;
//Napisz program, kt�ry wczyta 5 liczb a nast�pnie je wy�wietli na konsoli
//w odwrotnej kolejno�ci
void task1()
{
	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];


	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		cout << "Podaj liczbe\n";
		cin >> numbers[i];
	}

	for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
		cout << "Podana liczba " << numbers[i] << "\n";
}

//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi 
//a nast�pnie znajdzie minimum oraz maksimum.
void task2()
{
	const int UPPER_RANGE = 100;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
		cout << numbers[i] << ", ";
	cout << "\n";

}

void task3()
{
	const int UPPER_RANGE = 100;
	const int LOWER_RANGE = 5;

	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
		cout << numbers[i] << ", ";
	cout << "\n";

	int sum = 0;;
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		sum = sum + numbers[i];
	}

	double average = sum * 1.0 / SIZE_OF_ARRAY;
	cout << "�rednia liczb to: " << average << "\n";
}

void task4()
{
	const int UPPER_RANGE = 10;
	const int LOWER_RANGE = 3;
    const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];

	srand(time(NULL));

	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	}
	
	for (int numberFromRange = LOWER_RANGE; numberFromRange <= UPPER_RANGE; numberFromRange++)
	{
		int numberOfOccurrneces = 0;
		for (int j = 0; j < SIZE_OF_ARRAY; j++)
		{
			if (numbers[j] == numberFromRange)
				numberOfOccurrneces++;
		}
		cout << "Liczba " << numberFromRange << " wyst�pi�a " << numberOfOccurrneces << " razy." << endl;
	}
}

void task5()
{
	  
}

int main()
{
	setlocale(LC_CTYPE, "polish");
    task4();
}        