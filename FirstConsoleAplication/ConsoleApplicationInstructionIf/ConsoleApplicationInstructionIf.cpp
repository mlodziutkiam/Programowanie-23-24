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

    if (dayFromUser <= 31 && monthFromUser <=12 && dayFromUser > 0 && monthFromUser > 0)
    {
        cout << "Data jest poprawna.";
    }
    else
    {
        cout << "Data jest niepoprawna.";
    }
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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task6();
}

