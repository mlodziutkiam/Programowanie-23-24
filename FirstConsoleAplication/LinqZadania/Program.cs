using LinqTasksConsoleApp;

#region
var tasks = new List<TaskItem>
{
    new TaskItem(1, "Buy groceries", true),
    new TaskItem(2, "Clean the house", false),
    new TaskItem(3, "Pay bills", true),
    new TaskItem(4, "Study LINQ", false),
    new TaskItem(5, "Exercise", true)
};
#endregion

// Zadanie 1: Wyszukaj wszystkie zakończone zadania
Console.WriteLine("Zadanie 1");
List<TaskItem> completedTask = tasks.Where(t => t.IsCompleted == true).ToList();
foreach(var task in completedTask)
{
    Console.WriteLine(task);
}

// Zadanie 2: Znajdź pierwsze zadanie, które nie jest zakończone
Console.WriteLine("Zadanie 2");
var firstUncompletedTask = tasks.First(t => t.IsCompleted == false);
Console.WriteLine("Pierwsze nieukończone zadanie:");
Console.WriteLine(firstUncompletedTask);


// Zadanie 3: Posortuj zadania według nazwy
Console.WriteLine("Zadanie 3");
var sortedByName = tasks.OrderBy(p => p.Name);
foreach(var task in sortedByName)
{
    Console.WriteLine(task);
}

// Zadanie 4: Policz zadania zakończone

Console.WriteLine("Zadanie 4");
var countFinishedTasks = tasks.Count(t => t.IsCompleted);
Console.WriteLine(countFinishedTasks);

// Zadanie 5: Wybierz tylko nazwy zadań i wyświetl

var taskNames = tasks
    foreach(

// Zadanie 6: Znalezienie nazw zakończonych zadań posortowanych według długości nazwy

//Zadanie 7: Zadania pogrupowane według stanu zakończenia, a następnie posortowane w grupach według nazwy

//Zadanie 8: Najkrótsza nazwa zadania niezakończonego

//Zadanie 9: Ilość liter w nazwach wszystkich zakończonych zadań

//Zadanie 10: Lista zadań z indeksami (zakończone zadania z numeracją)