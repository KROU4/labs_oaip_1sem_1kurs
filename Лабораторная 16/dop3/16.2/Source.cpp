#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    // ��������� ����������, � ������� ����� ��������� ������
    string str;

    cout << "������� ��� �����:" << endl;

    // ���� ����� ������������ �� ��� ���, ���� ������������ �� ������ ������ ������
    while (getline(cin, str)) {
        // ���������, ���������� �� ������ � ����� "b"
        if (str[0] == 'b') {
            cout << str << endl;
        }
    }
    return 0;
}