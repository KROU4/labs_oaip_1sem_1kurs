#include <iostream>
#include <time.h>
int main()
{
	srand(unsigned(time(NULL)));
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n, k;
	cout << "������� ����� k "; cin >> k;
	cout << endl;
	cout << "������� ������ ������� "; cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << endl;
	}
	cout << endl;
	cout << " ������ ��������� > k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) > k)
			cout << i << ' ';
	}
	cout << endl;
	cout << " ������ ��������� < k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) < k)
			cout << i << ' ';
	}
	cout << endl;
	cout << " ������ ��������� = k: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) == k)
			cout << i << ' ';
	}
	cout << endl;

	return 0;

}
