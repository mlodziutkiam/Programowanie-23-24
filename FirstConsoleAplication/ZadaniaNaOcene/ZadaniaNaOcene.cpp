#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

/*

Stw�rz klas� Licz z:

� prywatnym polem wartosc przechowuj�cym warto�� liczbow�.

� metod� Dodaj przyjmuj�c� jeden parametr i dodaj�c� przekazan� warto�� do warto�ci trzymanej w polu wartosc.

� analogiczn� operacj� odejmij

� dodaj konstruktor bezparametrowy kt�ry ustawi warto�� pocz�tkow� na 0

� dodaj konstruktor z jednym parametrem - kt�ry inicjuje pole wartosc na liczb� przekazan� w parametrze.

W Main utw�rz kilka obiekt�w klasy Licz i wykonaj r�ne operacje. 
*/

class Count {
private:
    double number;
public:
    Count()
    {
        number = 0;
     }

    Count(int initialValue)
    {
        number = initialValue;
    }
    
    void Substract(double numberToSubstract)
    {
        number -= numberToSubstract;
    }

    void Add(int numberToAdd)
    {
        number += numberToAdd;
    }

    double NumberFromUser() const
    {
        return number;
    }
};


/*
Stw�rz klas� Sumator z:

� prywatnym polem Liczby b�d�cym tablic� liczb

� dodaj konstruktor domy�lny kt�ry uzupe�ni tablic� warto�ciami 0

� dodaj konstruktor z jednym parametrem kt�ry uzupe�ni tablic� warto�ciami pseudolosowymi z zakresu od 0 do warto�ci tego parametru.

� metod� Suma zwracaj�c� sum� liczb z pola Liczby

� metod� SumaPodziel3 zwracaj�c� sum� liczb z tablicy, kt�re s� podzielne przez 3

� metod� wypisuj�c� wszystkie elementy tablicy

� metod� przyjmuj�c� dwa parametry: lowIndex oraz highIndex, kt�ra wypisze elementy o indeksach >= lowIndex oraz <= highIndex. Metoda powinna zadzia�a� poprawnie, gdy lowIndex lub highIndex wykraczaj� poza zakres tablicy (pomin�� te elementy).
*/

class Sumator {
private:
    vector<int> Numbers;

public:
    
    Sumator() : Numbers(10, 0) {}

    
    Sumator(int maxValue) {
        srand(time(0)); 
        for (int i = 0; i < 10; ++i) {
            Numbers.push_back(rand() % (maxValue + 1));
        }
    }

    
    int Sum() const {
        int sum = 0;
        for (int num : Numbers) {
            sum += num;
        }
        return sum;
    }

    
    int SumDivisibleBy3() const {
        int sum = 0;
        for (int num : Numbers) {
            if (num % 3 == 0) {
                sum += num;
            }
        }
        return sum;
    }

    
    void PrintAll() const {
        for (int num : Numbers) {
            cout << num << " ";
        }
        cout << endl;
    }

   
    void PrintRange(int lowIndex, int highIndex) const {
        if (lowIndex < 0) {
            lowIndex = 0;
        }
        if (highIndex >= Numbers.size()) {
            highIndex = Numbers.size() - 1;
        }
        for (int i = lowIndex; i <= highIndex; ++i) {
            cout << Numbers[i] << " ";
        }
        cout << endl;
    }
};

/*
Stw�rz klasy :

� Osoba z polami : imie, nazwisko, wiek, konstruktorem inicjuj�cym wszystkie pola oraz metod� Wypisz.

� Ksi��ka z polami : tytul, autor(typu Osoba), data wydania oraz metod� Wypisz Utw�rz r�ne obiekty stworzonych klas.Wykonaj metody Wypisz.
*/
class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    
    Person(string first, string last, int a) : firstName(first), lastName(last), age(a) {}

    
    void Print() const {
        cout << "First Name: " << firstName << ", Last Name: " << lastName << ", Age: " << age << endl;
    }
};

class Book {
private:
    string title;
    Person author;
    string publicationDate;

public:
    
    Book(string t, Person auth, string date) : title(t), author(auth), publicationDate(date) {}

    
    void Print() const {
        cout << "Title: " << title << endl;
        cout << "Author: ";
        author.Print();
        cout << "Publication Date: " << publicationDate << endl;
    }
};

int main()
{
     /* Count stuff;
    stuff.Add(4.0);

    cout << "Result: " << stuff.NumberFromUser() << endl; 
    return 0; */

    /*
    Sumator s1;
    cout << "Printing all elements: ";
    s1.PrintAll();
    cout << "Sum: " << s1.Sum() << endl;
    cout << "Sum of numbers divisible by 3: " << s1.SumDivisibleBy3() << endl;

    
    Sumator s2(100);
    cout << "Printing all elements: ";
    s2.PrintAll();
    cout << "Sum: " << s2.Sum() << endl;
    cout << "Sum of numbers divisible by 3: " << s2.SumDivisibleBy3() << endl;

    
    cout << "Printing elements from index 2 to 5: ";
    s2.PrintRange(2, 5);
    cout << "Printing elements from index -3 to 15: ";
    s2.PrintRange(-3, 15);
    */

    /*
    
    Person author("John", "Doe", 45);
    author.Print();
     
    
    Book book("The Story Of Karol Bakalarz", author, "2024-04-29");
    book.Print();
    */
    
}

