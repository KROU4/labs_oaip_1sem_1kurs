
#include <iostream> 
#include <string> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    // ���������� ���������� ��� �������� ��������� ������ 
    string text;

    // ������ �� ���� ������ 
    cout << "������� �����: ";
    getline(cin, text);

    // ���������� ���������� ��� �������� ������ ���������� ����
    int count = 0;

    // ������� ���� �������� ������ 
    for (int i = 0; i < text.length(); i++) {

        // ���� ������ �������� ��������, �� ���������� ���� ������������� �� ������� 
        if (text[i] == ' ')
            count++;
    }

    // ����� ���������� 
    cout << "����� ���������� ����: " << count + 1 << endl;

    return 0;
}