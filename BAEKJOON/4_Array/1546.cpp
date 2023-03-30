// πÈ¡ÿ 1546 ∆Ú±’

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int N;
	double arr[1000] = { 0 };
	double M;
	double sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N, greater<>());

	M = arr[0];

	for (int j = 0; j < N; j++)
	{
		arr[j] = (arr[j] / M) * 100.0;
		sum += arr[j];
	}

	cout << sum / N;

	return 0;
}