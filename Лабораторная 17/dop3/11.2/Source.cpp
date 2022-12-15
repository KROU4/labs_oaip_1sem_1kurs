#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // ��������� �������� �����
	const int n = 5; // ������� ����������� �������
	int arr[n][n], sum = 0; // ���������� � ������������� ����������
	srand(time(NULL)); // ������������� ���������� ��������������� �����
	for (int i = 0; i < n; i++) // ���������� ������� ���������� ����������
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	cout << "������:" << endl; // ����� �������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) // �������� ������� �� ������������� ��������
	{
		bool flag = true;
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] < 0)
			{
				flag = false;
			}
		}
		if (flag) // ���� ������ �� �������� ������������� ���������
		{
			for (int j = 0; j < n; j++) // ������������ ��������� ������
			{
				sum += arr[i][j];
			}
		}
	}
	cout << "����� ��������� �����, �� ���������� ������������� ���������: " << sum << endl; // ����� ����������
	return 0;
}