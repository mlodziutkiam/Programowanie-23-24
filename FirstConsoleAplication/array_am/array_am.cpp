#include <iostream>
//Napisz program, który wczyta 5 liczb a nastêpnie je wyœwietli na konsoli
//w odwrotnej kolejnoœci
void task1()
{
	const int SIZE_OF_ARRAY = 5;
	int numbers[SIZE_OF_ARRAY];


	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		std::cout << "Podaj liczbe\n";
		std::cin >> numbers[i];
	}

	for (int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
		std::cout << "Podana liczba " << numbers[i] << "\n";
}

//Napisz program, który uzupe³ni tablicê liczbami losowymi 
//a nastêpnie znajdzie minimum oraz maksimum.
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
		std::cout << numbers[i] << ", ";
	std::cout << "\n";

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
		std::cout << numbers[i] << ", ";
	std::cout << "\n";

	int sum = 0;;
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		sum = sum + numbers[i];
	}

	double average = sum * 1.0 / SIZE_OF_ARRAY;
	std::cout << "Œrednia liczb to: " << average << "\n";
}

int main()
{
	task3 ();
}