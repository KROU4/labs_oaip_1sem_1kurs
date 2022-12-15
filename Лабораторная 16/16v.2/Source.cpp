
#include <iostream>
#include <string> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    string str; // ������, � ������� ����� ������ ������������ � ����������� �����
    cout << "������� ������: ";
    getline(cin, str);

    int max_word_length = 0; // ����� ������ �������� �����
    int min_word_length = INT32_MAX; // ����� ������ ��������� �����
    string max_word; // ����� ������� �����
    string min_word; // ����� �������� �����

    string cur_word; // ������� �����
    for (int i = 0; i < str.length(); i++)
    {
        // ���� ������� ������ - �����
        if (isalpha(str[i]))
        {
            // ��������� �� � ������� �����
            cur_word += str[i];
        }
        else
        {
            // ���� ����� �� ����� �����
            if (!cur_word.empty())
            {
                // ���� ����� �������� ����� ������ ����� ������ �������� �����
                if (cur_word.length() > max_word_length)
                {
                    // ���������� ����� ������ �������� �����
                    max_word_length = cur_word.length();
                    // ���������� ����� ������� �����
                    max_word = cur_word;
                }

                // ���� ����� �������� ����� ������ ����� ������ ��������� �����
                if (cur_word.length() < min_word_length)
                {
                    // ���������� ����� ������ ��������� �����
                    min_word_length = cur_word.length();
                    // ���������� ����� �������� �����
                    min_word = cur_word;
                }

                cur_word.clear(); // ������� ������� �����
            }
        }
    }

    // ���� ��������� ������ ��� ������
    if (!cur_word.empty())
    {
        // ���� ����� �������� ����� ������ ����� ������ �������� �����
        if (cur_word.length() > max_word_length)
        {
            // ���������� ����� ������ �������� �����
            max_word_length = cur_word.length();
            // ���������� ����� ������� �����
            max_word = cur_word;
        }

        // ���� ����� �������� ����� ������ ����� ������ ��������� �����
        if (cur_word.length() < min_word_length)
        {
            // ���������� ����� ������ ��������� �����
            min_word_length = cur_word.length();
            // ���������� ����� �������� �����
            min_word = cur_word;
        }
    }

    // ������� ����������
    cout << "����� ������� �����: \"" << max_word << "\"" << endl;
    cout << "����� ������ �������� �����: " << max_word_length << endl;
    cout << "����� �������� �����: \"" << min_word << "\"" << endl;
    cout << "����� ������ ��������� �����: " << min_word_length << endl;

    return 0;
}