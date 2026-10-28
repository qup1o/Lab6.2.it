// Lab 6.2 (iterative)
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Print(const int* a, const int size);
bool IsOdd(const int x);
int CountOdd(const int* a, const int size);

int main()
{
    srand((unsigned)time(NULL));  // ініціалізація генератора випадкових чисел

    const int n = 20;              // кількість елементів масиву
    int a[n];

    const int Low = -20;           // нижня межа діапазону значень
    const int High = 20;           // верхня межа діапазону значень

    Create(a, n, Low, High);
    cout << "Array:" << endl;
    Print(a, n);

    cout << "Count of odd elements = " << CountOdd(a, n) << endl;

    return 0;
}

// формування масиву випадковими числами з [Low; High]
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

// виведення масиву в рядок
void Print(const int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

// перевірка, чи число непарне
bool IsOdd(const int x)
{
    return x % 2 != 0;
}

// обчислення кількості непарних елементів масиву
int CountOdd(const int* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (IsOdd(a[i]))
            k++;
    return k;
}
