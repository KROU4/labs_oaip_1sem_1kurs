
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Объявляем константный массив
	const int SIZE = 10;
	int arr[SIZE];

	// Заполняем массив случайными числами от -50 до 50
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -50 + rand() % (50 + 1 + 50);
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Находим индексы первого максимального и последнего минимального элементов
	int minIndex = 0;
	int maxIndex = 0;
	int min = arr[minIndex];
	int max = arr[maxIndex];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
			if (minIndex == 0)
				minIndex = i;
		}
	}

	// Находим сумму элементов между первым максимальным и последним минимальным элементами
	int sum = 0;
	if (minIndex < maxIndex)
		for (int i = minIndex + 1; i < maxIndex; i++)
			sum += arr[i];
	else
		for (int i = maxIndex + 1; i < minIndex; i++)
			sum += arr[i];

	cout << "Сумма элементов между первым максимальным и последним минимальным элементами равна " << sum << endl;

	return 0;
}