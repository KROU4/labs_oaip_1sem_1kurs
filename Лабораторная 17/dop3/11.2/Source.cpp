#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // установка русского языка
	const int n = 5; // задание размерности массива
	int arr[n][n], sum = 0; // объявление и инициализация переменных
	srand(time(NULL)); // инициализация генератора псевдослучайных чисел
	for (int i = 0; i < n; i++) // заполнение массива случайными значениями
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	cout << "Массив:" << endl; // вывод массива
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) // проверка массива на отрицательные элементы
	{
		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < 0)
			{
				flag = false;
			}
		}
		if (flag) // если строка не содержит отрицательных элементов
		{
			for (int j = 0; j < n; j++) // суммирование элементов строки
			{
				sum += arr[i][j];
			}
		}
	}
	cout << "Сумма элементов строк, не содержащих отрицательных элементов: " << sum << endl; // вывод результата
	return 0;
}