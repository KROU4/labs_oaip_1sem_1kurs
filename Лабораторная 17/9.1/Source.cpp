#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    // инициализация рандомайзера
    srand(time(0));

    // объявление массива
    int arr[15];

    // инициализация массива
    for (int i = 0; i < 15; i++)
    {
        arr[i] = (rand() % 200) + 1;
    }

    // вывод массива
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // определение произведения всех элементов массива, значения которых меньше 50
    int prod = 1;
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] < 50)
        {
            prod *= arr[i];
        }
    }
    cout << "Произведение всех элементов массива, значения которых меньше 50: " << prod << endl;
    return 0;
}