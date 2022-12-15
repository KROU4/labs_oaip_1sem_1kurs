#include <iostream>
#include <locale>

using namespace std;

int main() {
	//установка локали дл€ правильного отображени€ кириллицы
	setlocale(LC_ALL, "rus");

	//размерность матрицы и вектора
	const int n = 3;
	const int m = 4;

	//объ€вл€ем матрицу и вектор
	const int A[n][m] = { {-3, -2, -1, -4}, {-5, -6, -7, -8}, {-9, -10, -11, -12} };
	const int B[m] = { -1, -2, -3, -4 };

	//объ€вл€ем переменную дл€ хранени€ результата
	int result = 0;

	//перемножаем матрицу и вектор
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result += A[i][j] * B[j];
		}
	}

	//выводим результат на экран
	cout << result << endl;

	return 0;
}