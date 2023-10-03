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

int main()
{
    setlocale(LC_CTYPE, "polish");
    task6();
}

