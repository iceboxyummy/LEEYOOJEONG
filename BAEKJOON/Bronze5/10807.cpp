// 백준 10807 갯수세기

#include<iostream>

using namespace std;

int main() {
	int N;
	int arr[100];
	int v;
	int count_v = 0;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> v;

	for (int j = 0; j < N; j++)
	{
		if (arr[j] == v)
			count_v++;
	}

	cout << count_v;

	return 0;
}