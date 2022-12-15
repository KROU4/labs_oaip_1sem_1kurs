#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    int N, M; // ������� ���������� �������
    cout << "������� ������� ���������� �������: ";
    cin >> N >> M;

    vector<vector<int>> arr(N, vector<int>(M)); // ������������� ���������� �������

    int number; // �����, ������� ����� ��������� �� ������� �� ������� ���������
    cout << "������� �����, ������� ����� ��������� �� ������� �� ������� ���������: ";
    cin >> number;

    // ���������� ������� ���������� �������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            arr[i][j] = rand() % 10;
    }

    // ����� ��������� �������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // �������� ����� �� ������� �� ������� ���������
    bool isFound = false;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (i == j && arr[i][j] == number)
                isFound = true;

    // ����� ����������
    if (isFound)
        cout << "����� ������� �� ������� ���������" << endl;
    else
        cout << "����� �� ������� �� ������� ���������" << endl;

    return 0;
}