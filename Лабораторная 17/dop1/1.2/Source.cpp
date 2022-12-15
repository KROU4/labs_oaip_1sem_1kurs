
#include <iostream>
#include <ctime> 
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//������ ������� ������
	const int n = 3;
	//�������������� ��� �������
	int arr[n][n], arr2[n][n];
	//��������� ������� ���������� �������������� �������
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			arr2[i][j] = rand() % 10 + 1;
		}
	}
	//������� ������ ������� 
	cout << "������ �������:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	//������� ������ �������
	cout << "������ �������:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}
	//�������� ��� �������
	int arr3[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum = 0;
			for (int k = 0; k < n; k++)
			{
				sum += arr[i][k] * arr2[k][j];
			}
			arr3[i][j] = sum;
		}
	}
	//������� ������������ ������
	cout << "������������ ������:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr3[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}