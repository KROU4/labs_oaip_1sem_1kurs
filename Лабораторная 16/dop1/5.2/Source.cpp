#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str; // ������ �����
	char search; // ������ ������
	int count = 0; // ��������� ����� ��������� ������� � �����

	// ������ �� ���� ������
	cout << "Enter text: ";
	getline(cin, str);

	// ������ �� ���� ������� ��� ������
	cout << "Enter search character: ";
	cin >> search;

	// ������� ���������� ����� ��������� ������� � �����
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == search) {
			count++;
		}
	}

	// ����� ����������
	cout << "Number of occurrences of '" << search << "' in the text: " << count << endl;

	return 0;
}