// FirstConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _USE_MATH_DEFINES
using namespace std;
#include <iostream>

/*
Podstawy programowania:

1.Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task1()
{
    double firstNumber, secondNumber;
    cout << "Podaj pierwsz¹ liczbe: ";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbe: ";
    cin >> secondNumber;

    double averageOfNumbers = (firstNumber + secondNumber) / 2;

    cout << "Srednia tych liczb to: " << averageOfNumbers << "/n";

}

void task2()
{
    double firstNumber, secondNumber;
    cout << "Podaj dlugosc pierwszego boku: ";
    cin >> firstNumber;
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> secondNumber;

    double areaOfRectangle = (firstNumber * secondNumber);

    cout << "Pole prostokata: " << areaOfRectangle;
}

void task3()
    {
        double coneHeight, coneRadius;
        cout << "Podaj wysokosc stozka: ";
        cin >> coneHeight;
        cout << "Podaj promien podloza stozka: ";
        cin >> coneRadius;

        double volumeOfCone = ((1.0 / 3 * M_PI * (coneRadius, 2)) * coneHeight);

        cout << "Objetosc stozka wynosi: " << volumeOfCone << endl;
    }

void task4()
    {
    double radiusOfCircle;
    cout << "Podaj promien kola: ";
    cin >> radiusOfCircle;

    double areaOfCircle = (M_PI * pow(radiusOfCircle, 2));

        cout << "Pole kola wynosi: " << areaOfCircle;
    }

void task5()
    {
    double firstNumber, secondNumber;
    cout << "Podaj pierwsz¹ liczbe: ";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbe: ";
    cin >> secondNumber;

    double result = (pow(firstNumber, 2) * pow(secondNumber, 2));

        cout << "Wynik wynosi: " << result;


    }

void task6()
{
    double heightOfTriangle, baseOfTriangle;
    cout << "Podaj wysokosc trojkata: ";
    cin >> heightOfTriangle;
    cout << "Podaj podstawe trojkata: ";
    cin >> baseOfTriangle;

    double areaOfTriangle = ((heightOfTriangle * baseOfTriangle) / 2);

    cout << "Pole trojkata wynosi: " << areaOfTriangle;

}

void task7()
{
    double volumeOfSphere, radiusOfSphere;
    cout << "Podaj promien kuli: ";
    cin >> radiusOfSphere;
    
    volumeOfSphere = (4.0 / 3 * M_PI * pow(radiusOfSphere, 3));

    cout << "Objetosc kuli o pormieniu r wynosi: " << volumeOfSphere;
}

void task8()
{
    double firstBaseOfTrapezium, secondBaseOfTrapezium, heightOfTrapezium;
    cout << "Podaj pierwsza podstawe trapezu: ";
    cin >> firstBaseOfTrapezium;
    cout << "Podaj druga podstawe trapezu: ";
    cin >> secondBaseOfTrapezium;
    cout << "Podaj wysokosc trapezu: ";
    cin >> heightOfTrapezium;
    double areaOfTrapezium = ((firstBaseOfTrapezium + secondBaseOfTrapezium) * heightOfTrapezium) / 2;

    cout << "Pole trapezu wynosi: " << areaOfTrapezium;

    
}

void task9()
{
    double weight1, weight2, weight3;
    double firstNumber, secondNumber, thirdNumber, average;
    cout << "Podaj pierwsz¹ liczbe: ";
    cin >> firstNumber;
    cout << "Podaj drug¹ liczbe: ";
    cin >> secondNumber;
    cout << "Podaj trzeci¹ liczbe: ";
    cin >> thirdNumber;
    cout << "Podaj wagê pierwszej liczby: ";
    cin >> weight1;
    cout << "Podaj wagê drugiej liczby: ";
    cin >> weight2;
    cout << "Podaj wagê trzeciej liczby: ";
    cin >> weight3;

    average = (firstNumber * weight1 + secondNumber * weight2 + thirdNumber * weight3) / (weight1 + weight2 + weight3);
    
    cout << "Œrednia wa¿ona podanych liczb wraz z podanymi wagami: " << average;
    

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //test();
    task9();
    //task2();
}