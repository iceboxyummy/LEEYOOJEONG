// ���� 2420 - ���ĸ�����

#include<iostream>

using namespace std;

int main()
{
	long long N;
	long long M;

	cin >> N >> M;

	if (N < M) cout << M - N;
	else cout << N - M;

	return 0;
}