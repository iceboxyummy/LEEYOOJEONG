// 백준 3052 나머지

#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		arr[i] %= 42;
	}
	
	for (int j = 0; j < 10 ; j++)
	{
		for (int k = 1; k < 10; k++)
		{
			if (arr[j] == arr[k])
				;

		}
	}

	cout << num;

	return 0;
}