// น้มุ 2738 - วเทฤ ตกผภ

#include<iostream>

using namespace std;

int main()
{
	int N, M;
	int A[100][100];
	int B[100][100];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> A[i][j];
	}

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < M; y++)
		{
			cin >> B[x][y];
			A[x][y] += B[x][y];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << A[i][j] << " ";

		cout<<endl;
	}

	return 0;
}