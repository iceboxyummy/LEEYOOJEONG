// 백준 8393 N까지의 합

#include<iostream>

using namespace std;

int main() 
{
	int n;
	int sum = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
		sum += i;

	cout << sum;

	return 0;
}