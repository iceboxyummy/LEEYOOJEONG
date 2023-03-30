// 백준 10798 세로읽기

#include<iostream>

using namespace std;

int main()
{
	char arr[5][16];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 16; j++)
			arr[i][j] = 'a' - 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			arr[i][j] = cin.get();
			if (arr[i][j] == '\n')
				break;
		}
	}

	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 5; j++)
			if (arr[j][i] != '\n' && arr[j][i] != 'a' - 1)
				cout << arr[j][i];

	return 0;
}