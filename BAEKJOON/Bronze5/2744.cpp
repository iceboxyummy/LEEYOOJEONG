// ���� 2744 - ��ҹ��� �ٲٱ�

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	cin >> str;

	for (int i = 0; i < 101; i++)
	{
		if (str[i] == '\0') break;
		else if (str[i] >= 97) cout << char(str[i] - 32);
		else cout << char(str[i] + 32);
	}
	return 0;
}