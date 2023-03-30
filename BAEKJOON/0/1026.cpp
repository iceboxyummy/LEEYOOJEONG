// 백준 1026 보물

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int N;
	int A[50];
	int B[50];
	int S = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> A[i];
	
	for (int j = 0; j < N; j++)
		cin >> B[j];

	sort(A, A + N);
	sort(B, B + N, greater<>());

	for (int k = 0; k < N; k++)
		S += A[k] * B[k];

	cout << S;

	return 0;
}