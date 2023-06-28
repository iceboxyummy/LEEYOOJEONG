// 백준 11720 - 숫자의 합

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	string num;
	cin >> num;

	int sum = 0;

	for (int i = 0; i < N; i++)
		sum += (num[i] - 48);

	cout << sum;
	return 0;
}