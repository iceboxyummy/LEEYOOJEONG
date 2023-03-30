// 백준 10813 공바꾸기

#include<iostream>

using namespace std;

int main()
{
	int N, M;
	int i, j;

	cin >> N >> M;

	int arr[101] = { 0 };

	for (int x = 0; x <= N; x++)
		arr[x] = x;

	for (int y = 0; y < M; y++)
	{
		cin >> i >> j;

		int temp;

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int z = 1; z <= N; z++)
		cout << arr[z] << " ";

	return 0;
}