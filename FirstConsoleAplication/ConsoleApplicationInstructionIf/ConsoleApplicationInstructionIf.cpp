#include <iostream>
using namespace std;


/*
1. Program sprawdzaj�cy czy podana liczba jest parzysta czy nieparzysta 
2. Program sprawdzaj�cy czy podana liczba jest dodatnia, ujemna czy r�wna zero
3. Program sprawdzaj�cy czy podany rok jest rokiem przest�pnym
4. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj�cy czy podane has�o jest poprawne (np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
6. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)
7. Program wy�wietlaj�cy odpowiedni komunikat w zale�no�ci od podanej temperatury (np. "ciep�o" dla temperatury powy�ej 20 stopni Celsjusza, "ch�odno" dla temperatury poni�ej 10 stopni Celsjusza itd.)
8. Program sprawdzj�cy czy podana liczba jest z przedia�u <1;15)
9. Program sprawdzaj�cy czy osoba jest pe�noletnia.
10. Program, kt�ry sprawdzi czy z podanych d�ugo�ci bok�w mo�na zrobi� tr�jk�t.
11. Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator matematyczny, umo�liwiaj�c u�ytkownikowi wyb�r operacji (dodawanie, odejmowanie, mno�enie, dzielenie) i wprowadzanie liczb do oblicze�.
12. Napisz program, kt�ry wczyta numer miesi�ca i wy�wietli jego s�owny odpowiednik.
13. Napisz program, kt�ry na podstawie wsp�czynnik�w r�wnania kwadratowego (a, b, c) sprawdzi, czy to r�wnanie ma rozwi�zania rzeczywiste, i je�li tak, to je obliczy.

*/

void task1()
{
    int numberFromUser;

    cout << "Podaj liczb�: ";
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
        cout << "Liczba jest r�wna zero." << endl;
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

    cout << "Podaj ocen�: ";
    cin >> gradeFromUser;

    if (gradeFromUser == 1)
    {
        cout << "Niedostateczny." << endl;
    }
    else if (gradeFromUser == 2)
    {
        cout << "Dopuszczaj�cy." << endl;
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
        cout << "Celuj�cy." << endl;
    }
    else
    {
        cout << "Nieprawid�owa warto��." << endl;
    }

}

void task5()
{
    string passwordFromUser;
    cout << "Podaj has�o: ";
        cin >> passwordFromUser;

        if (passwordFromUser == "abc123")
        {
            cout << "Has�o poprawne." << endl;
        }
        else
        {
            cout << "Has�o niepoprawne." << endl;
        }

}

void task6()
{
    int dayFromUser, monthFromUser, yearFromUser;
    cout << "Podaj dzie�: ";
    cin >> dayFromUser;
    cout << "Podaj miesi�c: ";
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
        cout << "Jest gor�co.";
    }
    else if (temperatureFromUser >= 20)
    {
        cout << "Jest ciep�o.";
    }
    else if (temperatureFromUser >= 10)
    {
        cout << "Jest ch�odno.";
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
    cout << "Podaj liczb� z przedzia�u 1-15: ";
    cin >> numberFromUser;

    if (numberFromUser >= 1 && numberFromUser <= 15)
    {
        cout << "Liczba jest z przedzia�u 1-15";
    }
    else
    {
        cout << "Liczba nie jest z przedzia�u 1-15";
    }
}

void task9()
{
    double ageFromUser;

    cout << "Podaj wiek: ";
    cin >> ageFromUser;

    if (ageFromUser >= 18)
    {
        cout << "Osoba jest pe�noletnia.";
    }

    else if (ageFromUser < 18 && ageFromUser > 0)
    {
        cout << "Osoba nie jest pe�noletnia.";
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
    cout << "Podaj pierwszy bok tr�jk�ta: ";
    cin >> sideOfTriangle1;
    cout << "Podaj drugi bok tr�jk�ta: ";
    cin >> sideOfTriangle2; 
    cout << "Podaj trzeci bok tr�jk�ta: ";
    cin >> sideOfTriangle3;

    if(sideOfTriangle1 + sideOfTriangle2 > sideOfTriangle3)
    {
        cout << "Z bok�w takiej d�ugo�ci mo�na zrobi� tr�jk�t";
    }
    else if (sideOfTriangle2 + sideOfTriangle3 > sideOfTriangle1)
    {
        cout << "Z bok�w takiej d�ugo�ci mo�na zrobi� tr�jk�t";
    }
    else if (sideOfTriangle1 + sideOfTriangle3 > sideOfTriangle2)
    {
        cout << "Z bok�w takiej d�ugo�ci mo�na zrobi� tr�jk�t";
    }
    else
    {
        cout << "Z bok�w takiej d�ugo�ci nie mo�na stworzy� tr�jk�ta";
    }
}

void task11()
{
    char operation;
    double firstNumber;
    double secondNumber;

    cout << "Wybierz operacje: + (dodawanie), - (odejmowanie), * (mno�enie), / (dzielenie)" << endl;
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
    
    cout << "Podaj liczb� z zarkesu od 1 do 12 w��cznie: ";
    cin >> monthAsNumber;

    switch (monthAsNumber)
    {
    case 1:
            cout << "Stycze�";
            break;

    case 2:
            cout << "Luty";
            break;

    case 3:
            cout << "Marzec";
            break;

    case 4:
            cout << "Kwiecie�";
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
            cout << "Sierpie�";
            break;

    case 9:
            cout << "Wrzesie�";
            break;

    case 10:
            cout << "Pa�dziernik";
            break;

    case 11:
            cout << "Listopad";
            break;

    case 12:
            cout << "Grudzie�";
            break;

    default:
            cout << "Nieprawid�owy numer!" << endl;
    }

        
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task12();
}

