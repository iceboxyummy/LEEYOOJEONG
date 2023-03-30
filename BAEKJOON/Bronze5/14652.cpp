// 백준 14652 - 나는 행복합니다~

#include<iostream>

using namespace std;

int main()
{
	int N, M, K;

	cin >> N >> M >> K;

	cout << K / M << " " << K % M;

	return 0;
}