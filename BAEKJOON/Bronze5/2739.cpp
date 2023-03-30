// 백준 2739 - 구구단 출력

#include<iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i < 10; i++)
		cout << N << " * " << i << " = " << N * i << endl;

	return 0;
}