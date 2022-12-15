#include <iostream>
#include <ctime>
#include <iomanip>
#include <clocale>

using namespace std;

int main()
{
	// Используем русскую локаль для вывода сообщений
	setlocale(LC_ALL, "rus");

	const int N = 10; // Размер массива
	int arr[N]; // Одномерный массив размером 10 элементов

	// Инициализация генератора случайных чисел
	srand(time(0));

	// Заполняем массив случайными числами в диапазоне от 0 до 100
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}

	// Выводим начальный массив на экран
	cout << "Начальный массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(3) << arr[i] << " ";
	}
	cout << endl;

	// Отсекаем нечетные элементы
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != 0)
		{
			// Заменяем нечетный элемент нулем
			arr[i] = 0;
		}
	}

	// Выводим измененный массив на экран
	cout << "Измененный массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(3) << arr[i] << " ";
	}
	cout << endl;

	return 0;
}