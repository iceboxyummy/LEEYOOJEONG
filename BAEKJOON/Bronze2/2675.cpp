// 백준 2675 - 문자열 반복

#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int R;
		string S;

		cin >> R >> S;
		
		int j = 0;

		while (S[j] != '\0')
		{
			for (int k = 0; k < R; k++)
				cout << S[j];
			j++;
		}
		cout << endl;
	}
	return 0;
}