#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    // ������������� ������������
    srand(time(0));

    // ���������� �������
    int arr[15];

    // ������������� �������
    for (int i = 0; i < 15; i++)
    {
        arr[i] = (rand() % 200) + 1;
    }

    // ����� �������
    cout << "�������� ������: " << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ����������� ������������ ���� ��������� �������, �������� ������� ������ 50
    int prod = 1;
    for (int i = 0; i < 15; i++)
    {
        if (arr[i] < 50)
        {
            prod *= arr[i];
        }
    }
    cout << "������������ ���� ��������� �������, �������� ������� ������ 50: " << prod << endl;
    return 0;
}