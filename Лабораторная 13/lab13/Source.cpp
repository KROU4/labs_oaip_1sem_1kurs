#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main(int argc, char* argv[])
{
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
    setlocale(LC_ALL, "rus");
    size_t n;
    string St, S;
    cout << "������� St : ";
    getline(cin, St, '\n');
    cout << "������� S : ";
    getline(cin, S, '\n');
    cout << "������� ������� (n2):";
    while (!(cin >> n) || n >= S.size()) {
        cerr << "������ " << endl;
        return EXIT_FAILURE;
    }
    S.insert(n, St);
    cout << S << endl;
    return 0;
}
