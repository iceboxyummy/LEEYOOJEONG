// 백준 2563 색종이

#include<iostream>

using namespace std;

int main()
{
	int paper;
	int arr[100][100] = { 0 };
	int black = 0;

	cin >> paper;

	for (int i = 0; i < paper; i++)
	{
		int a, b;
		cin >> a >> b;

		for (int x = a; x < a + 10; x++)
			for (int y = b; y < b + 10; y++)
				arr[x][y] = 1;	
	}

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (arr[i][j] == 1)
				black++;

	cout << black;

	return 0;
}