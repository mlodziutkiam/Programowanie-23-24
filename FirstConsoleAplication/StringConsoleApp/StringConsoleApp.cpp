
/*
* Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
*

* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).


* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
*/

//Napisz program, kt�ry wczyta znak z klawiatury i sprawdzi czy jest to ma�a litera aldfabetu.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void task1()
{
    char signFromUser;
    //signFromUser = 'a';
   cout << "Podaj znak\n";
    cin >> signFromUser;

    cout << "Poda�e� znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        cout << "Znak jest ma�� liter� alfabetu\n";
    else
        cout << "Znak nie jest ma�� liter� alfabetu\n";

    signFromUser = signFromUser + 2;
    cout << "Poda�e� znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    cout << "Poda�e� znak " << signFromUser << "\n";
}


//Napisz program, kt�ry poprosi cie o twoje imi� i ci� przywita.
void task2()
{
    string userName;
    //userName = "Ala";
    cout << "Podaj swoje imi�:\n";
    cin >> userName;

    cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, kt�ry policzy ile w napisie jest liter 'a'.
void task3()
{
    string textFromUser;
    cout << "Podaj tekst\n";
    cin >> textFromUser;

    //textFromUser = "";
    //textFromUser[0] = 'h';
    //std::cout << textFromUser[1] << "\n";
    //std::cout << textFromUser.length() << "\n"; 
    //if (textFromUser == "Ala")

    int counter = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            counter++;
    }

    cout << "Ma�ych liter 'a' jest " << counter << "\n";
}

//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task4()
{
    string password = "maslo313";
    string passwordFromUser;

    cout << "Podaj has�o:";
    cin >> passwordFromUser;

    if(passwordFromUser == password)
    {
        cout << "Gratulacje u�ytkowniku poda�e� prawid�owe has�o";
    }
    else
    {
        cout << "Poda�e� niepoprawne has�o, spr�b�j ponownie" << endl;
        cout << "Podaj has�o:";
        cin >> passwordFromUser;
    }


}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task5()
{
    {
        int vovelCount = 0, consonantCount = 0;
        string textFromUser;
        cout << "Podaj dowolne s�owo: ";
        cin >> textFromUser;

        for (char c : textFromUser)
        {
            if (isalpha(c))
            {
                if (c == 'a' || c == 'A' || c == 'e' 
                    || c == 'E' || c == 'i' || c == 'I' 
                    || c == 'o' || c == 'O' || c == 'u'
                    || c == 'U' || c == 'y' || c == 'Y')
                    vovelCount++;
                else
                    consonantCount++;
            }
        }
        cout << "W podanym s�owie jest: " << endl;
        cout << "Samog�osek: " << vovelCount << endl;
        cout << "Sp�g�osek: " << consonantCount << endl;


    }
}

// Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
void task4()
{
    int number;
    int rest;
    std::string binaryNumber = "";

    std::cout << "Podaj liczbe\n";
    std::cin >> number;

    do
    {
        rest = number % 2;
        if (rest == 0)
            binaryNumber = "0" + binaryNumber;
        else
            binaryNumber = "1" + binaryNumber;
        //std::cout << rest;
        number = number / 2;
    } while (number != 0);

    std::cout << "Liczba binarnie " << binaryNumber << "\n";
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
void task5()
{
    std::string textFromUser;
    std::cout << "Podaj napis\n";
    std::cin >> textFromUser;

    //wersja 1
    std::string reverseTextFromUser = "";
    for (int i = 0; i < textFromUser.length(); i++)
    {
        reverseTextFromUser = textFromUser[i] + reverseTextFromUser;
    }

    if (textFromUser == reverseTextFromUser)
        std::cout << "To s�owo jest palindromem\n";
    else
        std::cout << "To s�owo nie jest palindromem\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task5();
}

