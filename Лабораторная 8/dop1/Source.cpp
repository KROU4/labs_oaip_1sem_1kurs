#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, x, summa = 0;
	cout << "�� ������� ��������� ���� ������������������? ";
	cin >> n;
	for (int a = 1; a <= n; a++)
	{
		cout << "������� x = ";
		cin >> x;
		if (x % 2 == 0)
		{
			summa += x;
		}
	}
	cout << "����� ������ ��������� = " << summa;
	return (0);
}