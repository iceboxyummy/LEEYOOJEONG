// 백준 5522 카드게임

#include<iostream>

using namespace std;

int main()
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int temp;

		cin >> temp;

		sum += temp;
	}
	cout << sum;

	return 0;
}