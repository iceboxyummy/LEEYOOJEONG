// 백준-2562 최댓값

#include<iostream>

using namespace std;

int main()
{
	int arr[9];
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (arr[i] > arr[max])
			max = i;
	}

	cout << arr[max] << " " << max + 1;

	return 0;
}