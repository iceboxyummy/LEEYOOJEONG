// 백준 1152 - 단어의 개수

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	getline(cin, str);

	int x = 0;
	int word = 1;

	while (1)
	{
		if (str[x] == '\0')break;

		if (str[x] != ' ' && str[x + 1] == ' ')
			word++;
		x++;
	}

	if (str[x - 1] == ' ') word--;

	cout << word;

	return 0;
}