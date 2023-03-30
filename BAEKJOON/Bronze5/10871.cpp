// 백준 10871 - X보다 작은수

#include <iostream>

using namespace std;

int main() 
{
	int N;
	int X;
	int A;

	cin >> N >> X;

	for (int i = 0; i < N; i++)
	{
		cin >> A;
		if (A < X)
			cout << A << " ";
	}

	return 0;
}