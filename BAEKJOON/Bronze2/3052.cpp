// 백준 3052 - 나머지 

#include<iostream>

using namespace std;

int main()
{
	int remainder[10];

	for (int i = 0; i < 10; i++)
	{
		int temp;
		cin >> temp;

		remainder[i] = temp % 42;
	}
	
	int a = 0;

	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k <= j; k++)
		{
			if (k == j)  a++;
			if (remainder[j] == remainder[k]) break;
		}
	}
	cout << a;

	return 0;
}