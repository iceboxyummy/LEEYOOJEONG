// 백준 2577 - 숫자의 개수

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int A, B, C, D;

	cin >> A >> B >> C;

	D = A * B * C;

	int num[9] = { 0 };

	for (int i = 0; i < 9; i++)
		num[i] = (D % int(pow(10, i + 1))) / pow(10, i);

	int x = 9;

	if (num[8] == 0)
	{
		x--;
		if (num[7] == 0)
			x--;
	}

	int arr[10] = { 0 };

	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < x; k++)
			if (num[k] == j)
				arr[j]++;
	}

	for (int x = 0; x < 10; x++)
		cout << arr[x] << endl;

	return 0;
}