// 백준 1094 막대기

#include<iostream>

using namespace std;

int main()
{
	int X;
	int arr[7] = { 64,32,16,8,4,2,1 };
	int count = 0;

	cin >> X;

	for (int i = 0; i < 7; i++)
	{
		X -= arr[i];

		if (X == 0)
		{
			count++;
			cout << count;

			return 0;
		}

		else if (X < 0)
			X += arr[i];

		else
			count++;
	}
}