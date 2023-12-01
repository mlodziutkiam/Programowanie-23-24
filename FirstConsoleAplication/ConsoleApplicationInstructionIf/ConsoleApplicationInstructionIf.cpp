#include <iostream>
using namespace std;


/*
1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta 
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6. Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
8. Program sprawdzj¹cy czy podana liczba jest z przedia³u <1;15)
9. Program sprawdzaj¹cy czy osoba jest pe³noletnia.
10. Program, który sprawdzi czy z podanych d³ugoœci boków mo¿na zrobiæ trójk¹t.
11. Napisz program, który bêdzie dzia³aæ jako prosty kalkulator matematyczny, umo¿liwiaj¹c u¿ytkownikowi wybór operacji (dodawanie, odejmowanie, mno¿enie, dzielenie) i wprowadzanie liczb do obliczeñ.
12. Napisz program, który wczyta numer miesi¹ca i wyœwietli jego s³owny odpowiednik.
13. Napisz program, który na podstawie wspó³czynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwi¹zania rzeczywiste, i jeœli tak, to je obliczy.

*/

void task1()
{
    int numberFromUser;

    cout << "Podaj liczbê: ";
    cin >> numberFromUser;

    if (numberFromUser % 2 == 0)
    {
        cout << "Liczba jest parzysta" << endl;
    }
    else
    {
        cout << "Liczba jest nieparzysta" << endl;
    }
    
}

void task2()
{
    int numberFromUser;
  
    cout << "Podaj liczbe: ";
    cin >> numberFromUser;

    if (numberFromUser > 0) 
    {
        cout << "Liczba jest dodatnia." << endl;
    }
    else if (numberFromUser < 0) 
    {
        cout << "Liczba jest ujemna." << endl;
    }
    else 
    {
        cout << "Liczba jest równa zero." << endl;
    }

    

}

void task3()
{
    int yearFromUser;

    cout << "Podaj rok: ";
    cin >> yearFromUser;

    if ((yearFromUser % 4 == 0 && yearFromUser % 100 != 0) || yearFromUser % 400 == 0) 
    {
        cout << "Rok jest przestepny." << endl;
    }
    else 
    {
        cout << "Rok nie jest przestepny." << endl;
    }
}

void task4()
{
    int gradeFromUser;

    cout << "Podaj ocenê: ";
    cin >> gradeFromUser;

    if (gradeFromUser == 1)
    {
        cout << "Niedostateczny." << endl;
    }
    else if (gradeFromUser == 2)
    {
        cout << "Dopuszczaj¹cy." << endl;
    }
    else if (gradeFromUser == 3)
    {
        cout << "Dostateczny." << endl;
    }
    else if (gradeFromUser == 4)
    {
        cout << "Dobry." << endl;
    }
    else if (gradeFromUser == 5)
    {
        cout << "Bardzo dobry." << endl;
    }
    else if (gradeFromUser == 6)
    {
        cout << "Celuj¹cy." << endl;
    }
    else
    {
        cout << "Nieprawid³owa wartoœæ." << endl;
    }

}

void task5()
{
    string passwordFromUser;
    cout << "Podaj has³o: ";
        cin >> passwordFromUser;

        if (passwordFromUser == "abc123")
        {
            cout << "Has³o poprawne." << endl;
        }
        else
        {
            cout << "Has³o niepoprawne." << endl;
        }

}

void task6()
{
    int dayFromUser, monthFromUser, yearFromUser;
    cout << "Podaj dzieñ: ";
    cin >> dayFromUser;
    cout << "Podaj miesi¹c: ";
    cin >> monthFromUser;
    cout << "Podaj rok: ";
    cin >> yearFromUser;

    bool isLeapYear = yearFromUser % 4 == 0 && yearFromUser % 100 != 0 || yearFromUser % 400 == 0;

    if 
        (dayFromUser < 1
            || dayFromUser > 32

            || monthFromUser < 1
            || monthFromUser > 12
            
            || (dayFromUser == 31
                && (monthFromUser == 4
                    ||monthFromUser == 6
                    ||monthFromUser == 9
                    ||monthFromUser == 11))
            || (monthFromUser == 2
                & dayFromUser >29)
            || (monthFromUser == 2
                && dayFromUser == 29
                && !isLeapYear)
            )
    {
        cout << "Taka data nie istnieje!";
    }

    cout << "Poprawna data\n";
}

void task7()
{
    int temperatureFromUser;
    cout << "Podaj temperature: ";
    cin >> temperatureFromUser;

    if (temperatureFromUser >= 30)
    {
        cout << "Jest gor¹co.";
    }
    else if (temperatureFromUser >= 20)
    {
        cout << "Jest ciep³o.";
    }
    else if (temperatureFromUser >= 10)
    {
        cout << "Jest ch³odno.";
    }
    else if (temperatureFromUser >= 0)
    {
        cout << "Jest zimno.";
    }
    else if (temperatureFromUser < 0)
    {
        cout << "Jest bardzo zimno.";
    }
    
    
}

void task8()
{
    double numberFromUser;
    cout << "Podaj liczbê z przedzia³u 1-15: ";
    cin >> numberFromUser;

    if (numberFromUser >= 1 && numberFromUser <= 15)
    {
        cout << "Liczba jest z przedzia³u 1-15";
    }
    else
    {
        cout << "Liczba nie jest z przedzia³u 1-15";
    }
}

void task9()
{
    double ageFromUser;

    cout << "Podaj wiek: ";
    cin >> ageFromUser;

    if (ageFromUser >= 18)
    {
        cout << "Osoba jest pe³noletnia.";
    }

    else if (ageFromUser < 18 && ageFromUser > 0)
    {
        cout << "Osoba nie jest pe³noletnia.";
    }

    else if (ageFromUser < 0)
    {
        cout << "Wiek jest niepoprawny.";
    }
    else
    {
        cout << "Podaj poprawny wiek! ";
    }
}

void task10()
{
    double sideOfTriangle1, sideOfTriangle2, sideOfTriangle3;
    cout << "Podaj pierwszy bok trójk¹ta: ";
    cin >> sideOfTriangle1;
    cout << "Podaj drugi bok trójk¹ta: ";
    cin >> sideOfTriangle2; 
    cout << "Podaj trzeci bok trójk¹ta: ";
    cin >> sideOfTriangle3;

    if(sideOfTriangle1 + sideOfTriangle2 > sideOfTriangle3)
    {
        cout << "Z boków takiej d³ugoœci mo¿na zrobiæ trójk¹t";
    }
    else if (sideOfTriangle2 + sideOfTriangle3 > sideOfTriangle1)
    {
        cout << "Z boków takiej d³ugoœci mo¿na zrobiæ trójk¹t";
    }
    else if (sideOfTriangle1 + sideOfTriangle3 > sideOfTriangle2)
    {
        cout << "Z boków takiej d³ugoœci mo¿na zrobiæ trójk¹t";
    }
    else
    {
        cout << "Z boków takiej d³ugoœci nie mo¿na stworzyæ trójk¹ta";
    }
}

void task11()
{
    char operation;
    double firstNumber;
    double secondNumber;

    cout << "Wybierz operacje: + (dodawanie), - (odejmowanie), * (mno¿enie), / (dzielenie)" << endl;
    cin >> operation;
    cout << "Enter the first number: " << endl;
    cin >> firstNumber;
    cout << "Enter the second number: " << endl;
    cin >> secondNumber;

    switch (operation)
    {
    case '+':
        cout << "Addition result of those two numbers is: " << firstNumber + secondNumber << endl;
        break;
    case '-':
        cout << "Subtraction result of those two numbers is: " << firstNumber - secondNumber << endl;
        break;
    case '*':
        cout << "Multiplication result of those two numbers is: " << firstNumber * secondNumber << endl;
        break;
    case '/':
        cout << "Subtraction result of those two numbers is: " << firstNumber - secondNumber << endl;
        break;
    default:
        cout << "Invaild operation. Please use '+', '-', '*', or '/'." << endl;
    }
}

void task12()
{
    int monthAsNumber;
    
    cout << "Podaj liczbê z zarkesu od 1 do 12 w³¹cznie: ";
    cin >> monthAsNumber;

    switch (monthAsNumber)
    {
    case 1:
            cout << "Styczeñ";
            break;

    case 2:
            cout << "Luty";
            break;

    case 3:
            cout << "Marzec";
            break;

    case 4:
            cout << "Kwiecieñ";
            break;

    case 5:
            cout << "Maj";
            break;

    case 6:
            cout << "Czerwiec";
            break;

    case 7:
            cout << "Lipiec";
            break;

    case 8:
            cout << "Sierpieñ";
            break;

    case 9:
            cout << "Wrzesieñ";
            break;

    case 10:
            cout << "PaŸdziernik";
            break;

    case 11:
            cout << "Listopad";
            break;

    case 12:
            cout << "Grudzieñ";
            break;

    default:
            cout << "Nieprawid³owy numer!" << endl;
    }

        
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task12();
}

