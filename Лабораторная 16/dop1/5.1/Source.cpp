#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    const int n = 5; // ���������� �����
    const int m = 6; // ���������� �������� 

    // �������� ���������� �������
    int array[n][m];

    srand(time(0)); // ������������� ���������� ��������� �����

    // ���������� ������� ���������� �������
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            array[i][j] = rand() % 1000;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    // ����������� ������������ �������� � ������ ������ �������
    int min = array[0][0];
    int row_index = 0; // ������ ������ � ����������� ���������
    for (int i = 0; i < n; i++)
    {
        min = array[i][0];
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] < min)
            {
                min = array[i][j];
                row_index = i;
            }
        }
    }

    // ����������� ������������� �������� ����� ����������� ��������� � ������� �������
    int max = array[0][0];
    for (int i = 0; i < n; i++)
    {
        if (array[i][0] > max)
        {
            max = array[i][0];
            row_index = i;
        }
    }

    // ����� ����������
    cout << "����� ������, � ������� ���������� ������������ ������� ����� ����������� ��������� � ������� �������: " << row_index << endl;

    return 0;
}