while (true) {
    Console.WriteLine("Salamalekum podaj pierwszą liczbe: ");
double nigga1 = int.Parse(Console.ReadLine());
Console.WriteLine("Salamalekum podaj drugą liczbe: ");
double nigga2 = int.Parse(Console.ReadLine());
Console.WriteLine("Salamalkum, jakie działanie wariacie?");
char znak = char.Parse(Console.ReadLine());
double wynik;


    if (znak == '+')
    {
        wynik = nigga1 + nigga2; 
        Console.WriteLine("Wynik wynosi: " + wynik);
    }
    else if (znak == '-')
    {
        wynik = nigga1 - nigga2;
        Console.WriteLine("Wynik wynosi: " + wynik);
    }
    else if (znak == '*')
    {
        wynik = nigga1 * nigga2;
        Console.WriteLine("Wynik wynosi: " + wynik);
    }
    else if (znak == '/')
    {
        wynik = nigga1 / nigga2;
        Console.WriteLine("Wynik wynosi: " + wynik);
    }
    else
    {
        Console.WriteLine("Wez podaj jakies normalne liczby");
    }
}

