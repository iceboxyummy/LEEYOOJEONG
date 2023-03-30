// 백준 10818 최소,최대

#include<iostream>

using namespace std;

int main()
{
	int N;
	int min;
	int max;

	cin >> N;

	cin >> min;
	max = min;

	for (int i = 1; i < N; i++)
	{
		int x;
		cin >> x;

		if (x < min)
			min = x;

		if (x > max)
			max = x;
	}

	cout << min << " " << max;

	return 0;
}