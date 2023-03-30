// 백준 25314 - 코딩은 체육과목입니다

#include<iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i += 4)
		cout << "long ";

	cout << "int";

	return 0;
}