
#include <iostream>
#include <ctime>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// ��������� ����������� ������
	const int SIZE = 10;
	int arr[SIZE];

	// ��������� ������ ���������� ������� �� -50 �� 50
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = -50 + rand() % (50 + 1 + 50);
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ������� ������� ������� ������������� � ���������� ������������ ���������
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

	// ������� ����� ��������� ����� ������ ������������ � ��������� ����������� ����������
	int sum = 0;
	if (minIndex < maxIndex)
		for (int i = minIndex + 1; i < maxIndex; i++)
			sum += arr[i];
	else
		for (int i = maxIndex + 1; i < minIndex; i++)
			sum += arr[i];

	cout << "����� ��������� ����� ������ ������������ � ��������� ����������� ���������� ����� " << sum << endl;

	return 0;
}