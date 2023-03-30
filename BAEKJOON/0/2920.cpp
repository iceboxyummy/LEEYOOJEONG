// 백준 2920 음계

#include<iostream>

using namespace std;

int main()
{
	int arr[8];

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int j = 0; j < 8; j++)
	{
		if (arr[j] == j + 1) 
		{
			if (j == 7)
			{
				cout << "ascending";
				return 0;
			}
			continue;
		}
		else break;
	}

	for (int k = 0; k <8; k++)
	{
		if (arr[k] == 8-k) 
		{
			if (k == 7)
			{
				cout << "descending";
				return 0;
			}
			continue;
		}
		else break;
	}

	cout << "mixed";

	return 0;
}