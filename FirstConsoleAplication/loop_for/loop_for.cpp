/*

DO-WHILE
* Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
* Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.

WHILE
* Miasto T. ma obecnie 100 tys. mieszka�c�w, ale jego populacja ro�nie co roku o 3% rocznie. Miasto B. ma 300 tys. mieszka�c�w i ta liczba ro�nie w tempie 2% na rok. Wykonaj symulacj� prezentuj�c� liczb� mieszka�c�w w obu miastach i zatrzymuj�c� si�, gdy liczba mieszka�c�w miasta T. przekroczy liczb� z miasta B.
* Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej. Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
* Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).

FOR
* Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
* Program obliczaj�cy sum� liczb od 1 do 100
* Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczaj�cy n!.
* Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
* Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
* Program, k�ry wy�wietli poni�sze cztery zwory:
    ****       54321        121212        122333
    ***        65432        212121        223334444
    **         76543        121212        333444455555
    *          87654        212121        444455555666666

* Oblicz sum� szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je�eli si� nie pomylisz, to dla odpowiednio du�ej warto�ci n po przemno�eniu jej przez 6 i spierwiastkowaniu powiniene� otrzyma� warto�� liczby ? (suma szeregu jest r�wna ?2/6). Zwr�� uwag�, �e pierwsza warto�� indeksu to 1, a nie 0. Dok�adno�� oblicze� mo�na sprawdzi� por�wnuj�c z warto�ci� odczytan� z w�asno�ci Math.PI.

*/

#include <iostream>
using namespace std;

//Napisz program, kt�ry pobiera od u�ytkownika liczb� dop�ki nie bedzie on zerem
void task1()
{
    int numberFromUser;
        do
        {
            cout << "Podaj liczbe: ";
                cin >> numberFromUser;
        } while (numberFromUser != 0);
}

//Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
    for (int i = 1; i <= 10; i++)
        cout << i <<endl;
}
//Program obliczaj�cy sum� liczb od 1 do 100
void task3()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    cout << "Suma liczb od 1 do 100 wynosi " << sum << "\n";
}
//Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task4()
{
    for (int i = 1; i <= 10; i++)
    {
        int powerOfNumber = pow(i, 2);
        cout << powerOfNumber<< endl;
    }
}
//Program obliczaj�cy n!.
void task5()
{
    int numberFromUser;
    cout << "Podaj liczbe: " << endl;
    cin >> numberFromUser;
    int sum = 1;
    for (int i = 1; i <= numberFromUser; i++)
    {
         sum = sum * i;
    }
    cout << "Silnia liczby wynosi: " << sum << endl;
}

//Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task6()
{
    int factorial = 1;
    for (int i = 1; i <= 10 ; i++)
    {
        factorial = factorial * i;
        cout << "Silnie liczb 1-10: " << factorial << endl;
    }
}
//Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task7()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; i++)
        {
            cout << i << "*" << j << "=" << i * j << endl;
        }
    }

}
//Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

void task8()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << ",";
        }
        
    }
}
 
//Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
void task9()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i * i;
    }
    cout << sum;
}

//Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task10()
{
    int sum = 0;
    for (int i = 0; i <= 20; i++)
    {
        sum = sum + i * i;
    }
    cout << sum;
}
int main()
{
   // task6();
    task9();
}