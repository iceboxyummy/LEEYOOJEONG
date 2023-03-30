// 백준 10810 공넣기

#include<iostream>

using namespace std;

int main() 
{
	int N, M;
	int i, j, k;
	int arr[101] = { 0 };

	cin >> N >> M;

	for (int x = 0; x < M; x++)
	{
		cin >> i >> j >> k;
		for (int y = i; y <= j; y++)
		{
			arr[y] = k;
		}
	}

	for (int z = 1; z <= N; z++)
	{
		cout << arr[z] << " ";
	}
	
	return 0;
}