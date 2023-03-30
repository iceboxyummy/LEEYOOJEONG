// 백준 10872 - 팩토리얼

#include<iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N == 0 || N == 1)
	{
		cout << "1";
		return 0;
	}

	else
		for (int i = N - 1; i > 0; i--)
			N *= i;

	cout << N;

	return 0;
}