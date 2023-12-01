/*

DO-WHILE
* Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
* Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.

WHILE
* Miasto T. ma obecnie 100 tys. mieszkañców, ale jego populacja roœnie co roku o 3% rocznie. Miasto B. ma 300 tys. mieszkañców i ta liczba roœnie w tempie 2% na rok. Wykonaj symulacjê prezentuj¹c¹ liczbê mieszkañców w obu miastach i zatrzymuj¹c¹ siê, gdy liczba mieszkañców miasta T. przekroczy liczbê z miasta B.
* Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
* Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).

FOR
* Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
* Program obliczaj¹cy sumê liczb od 1 do 100
* Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
* Program obliczaj¹cy n!.
* Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
* Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
* Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
* Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
* Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
* Program, kóry wyœwietli poni¿sze cztery zwory:
    ****       54321        121212        122333
    ***        65432        212121        223334444
    **         76543        121212        333444455555
    *          87654        212121        444455555666666

* Oblicz sumê szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je¿eli siê nie pomylisz, to dla odpowiednio du¿ej wartoœci n po przemno¿eniu jej przez 6 i spierwiastkowaniu powinieneœ otrzymaæ wartoœæ liczby ? (suma szeregu jest równa ?2/6). Zwróæ uwagê, ¿e pierwsza wartoœæ indeksu to 1, a nie 0. Dok³adnoœæ obliczeñ mo¿na sprawdziæ porównuj¹c z wartoœci¹ odczytan¹ z w³asnoœci Math.PI.

*/

#include <iostream>
using namespace std;

//Napisz program, który pobiera od u¿ytkownika liczbê dopóki nie bedzie on zerem
void task1()
{
    int numberFromUser;
        do
        {
            cout << "Podaj liczbe: ";
                cin >> numberFromUser;
        } while (numberFromUser != 0);
}

//Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task2()
{
    for (int i = 1; i <= 10; i++)
        cout << i <<endl;
}
//Program obliczaj¹cy sumê liczb od 1 do 100
void task3()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }

    cout << "Suma liczb od 1 do 100 wynosi " << sum << "\n";
}
//Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task4()
{
    for (int i = 1; i <= 10; i++)
    {
        int powerOfNumber = pow(i, 2);
        cout << powerOfNumber<< endl;
    }
}
//Program obliczaj¹cy n!.
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

//Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task6()
{
    int factorial = 1;
    for (int i = 1; i <= 10 ; i++)
    {
        factorial = factorial * i;
        cout << "Silnie liczb 1-10: " << factorial << endl;
    }
}
//Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
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
//Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

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
 
//Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task9()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i * i;
    }
    cout << sum;
}

//Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
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