


#include <iostream>
#include <ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_ALL, "RUS");
	int c;
	do
	{
		cout << endl;
		cout << "�������" << endl;
		cout << "1-���������� ������" << endl;
		cout << "2-������ � ��������" << endl;
		cout << "3-�����" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}
	} while (c != 3);

}
void massiv()
{
	const int N = 10;
	int sz = 10;
	int counter = 0;
	int i, n, imax = 0, count = 0, A[N];
	float sum = 0, max = 0, c;
	int last, index = 0;
	cout << ("������� ����� �=:");
	cin >> c;
	srand((unsigned)time(NULL));
	int rmn = -10, rmx = 5;
	cout << "������� ������ ������� ";
	cin >> sz;
	cout << "������ �:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}

	for (i = 0; i < sz; i++)
		if (A[i] < c) {
			count++;
		}
	cout << ("���������� ��������� ������� �:") << count << endl;
	for (i = 0; i < sz; i++)
		if (A[i] > max)
		{
			max = A[i];
			imax = i;
		}
	cout << ("������������ �������: ") << max << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < 0) {
			last = A[i];
			index = i;
		}
	}
	cout << ("������� ���������� �������������� ��������") << index << endl;
	for (i = index + 1; i < sz; i++) sum += int(A[i]);
	cout << ("����� ��������� ������������ ����� ��������������: ") << sum << endl;
	max = A[0];
}
void matrix()
{
	setlocale(LC_ALL, "RUS");
	const int N = 3;
	int mas[N][N];
	int i, j;
	srand((unsigned)time(NULL));
	int rmn = -3, rmx = 5;
	srand(time(NULL));
	cout << "�������: " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			mas[i][j] = (int)(((double)rand() /
				(double)RAND_MAX) * (rmx - rmn) + rmn);
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	int len = 0;
	for (int i = 0; i < N; i++)
	{
		int k = 0;
		for (int j = 0; j < N; j++) //�������� �������� ���������
			if (mas[i][j] == 0)  //���� ����������� �������
				k++;  //�����������
		if (k > 0)       //���� � ������ ���� 0
			len++;    //����� ����������� ����� ����� � ������� ���� 0
	}
	if (len > 0)
	{
		cout << "���-�� ����� � 0-���������: " << len;
	}
	else {
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				if (mas[i][j] < 0)
				{
					mas[i][j] = 0;
				}
				cout << mas[i][j] << "\t";
			}
			cout << "\n";
		}
	}
}