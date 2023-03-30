// 백준 10811 바구니 뒤집기

#include<iostream>

using namespace std;

int main()
{
	int N, M;
	int i, j;

	int arr[101] = { 0 };

	cin >> N >> M;

	for (int x = 1; x <= N; x++)
		arr[x] = x;

	for (int y = 0; y < M; y++)
	{
		cin >> i >> j;

		while (i < j)
		{
			int temp;

			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			i++; j--;
		}
	}

	for (int z = 1; z <= N; z++)
		cout << arr[z] << " ";

	return 0;
}