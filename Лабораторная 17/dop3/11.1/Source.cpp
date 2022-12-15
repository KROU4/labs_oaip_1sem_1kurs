#include <iostream>
#include <ctime>
#include <iomanip>
#include <clocale>

using namespace std;

int main()
{
	// ���������� ������� ������ ��� ������ ���������
	setlocale(LC_ALL, "rus");

	const int N = 10; // ������ �������
	int arr[N]; // ���������� ������ �������� 10 ���������

	// ������������� ���������� ��������� �����
	srand(time(0));

	// ��������� ������ ���������� ������� � ��������� �� 0 �� 100
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}

	// ������� ��������� ������ �� �����
	cout << "��������� ������:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(3) << arr[i] << " ";
	}
	cout << endl;

	// �������� �������� ��������
	for (int i = 0; i < N; i++)
	{
		if (arr[i] % 2 != 0)
		{
			// �������� �������� ������� �����
			arr[i] = 0;
		}
	}

	// ������� ���������� ������ �� �����
	cout << "���������� ������:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << setw(3) << arr[i] << " ";
	}
	cout << endl;

	return 0;
}