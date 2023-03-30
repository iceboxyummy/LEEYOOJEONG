// 백준 1267 핸드폰 요금

#include<iostream>

using namespace std;

int main()
{
	int N;

	int YS[21] = { 0 };
	int MS[21] = { 0 };

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int time;

		cin >> time;

		YS[i] = ((time / 30) + 1) * 10;
		YS[20] += YS[i];

		MS[i] = ((time / 60) + 1) * 15;
		MS[20] += MS[i];
	}

	if (YS[20] < MS[20])
		cout << "Y " << YS[20];

	else if (YS[20] == MS[20])
		cout << "Y M " << MS[20];

	else
		cout << "M " << MS[20];

	return 0;
}