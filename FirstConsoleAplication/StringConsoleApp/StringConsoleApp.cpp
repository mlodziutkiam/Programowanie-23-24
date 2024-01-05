
/*
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
*

* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).


* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
*/

//Napisz program, który wczyta znak z klawiatury i sprawdzi czy jest to ma³a litera aldfabetu.

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

    cout << "Poda³eœ znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        cout << "Znak jest ma³¹ liter¹ alfabetu\n";
    else
        cout << "Znak nie jest ma³¹ liter¹ alfabetu\n";

    signFromUser = signFromUser + 2;
    cout << "Poda³eœ znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    cout << "Poda³eœ znak " << signFromUser << "\n";
}


//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task2()
{
    string userName;
    //userName = "Ala";
    cout << "Podaj swoje imiê:\n";
    cin >> userName;

    cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, który policzy ile w napisie jest liter 'a'.
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

    cout << "Ma³ych liter 'a' jest " << counter << "\n";
}

//Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task4()
{
    string password = "maslo313";
    string passwordFromUser;

    cout << "Podaj has³o:";
    cin >> passwordFromUser;

    if(passwordFromUser == password)
    {
        cout << "Gratulacje u¿ytkowniku poda³eœ prawid³owe has³o";
    }
    else
    {
        cout << "Poda³eœ niepoprawne has³o, spróbój ponownie" << endl;
        cout << "Podaj has³o:";
        cin >> passwordFromUser;
    }


}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task5()
{
    {
        int vovelCount = 0, consonantCount = 0;
        string textFromUser;
        cout << "Podaj dowolne s³owo: ";
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
        cout << "W podanym s³owie jest: " << endl;
        cout << "Samog³osek: " << vovelCount << endl;
        cout << "Spó³g³osek: " << consonantCount << endl;


    }
}

// Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
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

//Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
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
        std::cout << "To s³owo jest palindromem\n";
    else
        std::cout << "To s³owo nie jest palindromem\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task5();
}

