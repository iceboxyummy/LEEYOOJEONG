// 백준 15727 - 조별과제를 하려는데 조장이 사라졌다

#include<iostream>

using namespace std;

int main()
{
	int L;
	cin >> L;

	if (L % 5 == 0) cout << L / 5;
	else cout << (L / 5) + 1;

	return 0;
}