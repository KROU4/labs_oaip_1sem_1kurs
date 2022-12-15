#include <iostream>
#include <locale>

using namespace std;

int main() {
	//��������� ������ ��� ����������� ����������� ���������
	setlocale(LC_ALL, "rus");

	//����������� ������� � �������
	const int n = 3;
	const int m = 4;

	//��������� ������� � ������
	const int A[n][m] = { {-3, -2, -1, -4}, {-5, -6, -7, -8}, {-9, -10, -11, -12} };
	const int B[m] = { -1, -2, -3, -4 };

	//��������� ���������� ��� �������� ����������
	int result = 0;

	//����������� ������� � ������
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result += A[i][j] * B[j];
		}
	}

	//������� ��������� �� �����
	cout << result << endl;

	return 0;
}