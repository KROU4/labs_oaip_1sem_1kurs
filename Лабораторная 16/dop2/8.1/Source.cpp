#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// ����������� �������� ��� ���������� �������
const int N = 10;
const int M = 10;

int main()
{
    setlocale(LC_ALL, "RUS");
    // ������������� ��������������� �����
    srand(time(0));

    // �������� ���������� �������
    int arr[N][M];

    // ���������� ���������� ��� �������� ��������
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;

    // ���������� �������
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // ��������� ���������� ������ ����� �� -10 �� 10
            arr[i][j] = -10 + rand() % 21;

            // ������� ���������� ������������� ���������
            if (arr[i][j] > 0)
                count_positive++;
            // ������� ���������� ������������� ���������
            else if (arr[i][j] < 0)
                count_negative++;
            // ������� ���������� ������� ���������
            else
                count_zero++;
        }
    }

    // ����� ����������
    cout << "���������� ������������� ���������: " << count_positive << endl;
    cout << "���������� ������������� ���������: " << count_negative << endl;
    cout << "���������� ������� ���������: " << count_zero << endl;

    return 0;
}