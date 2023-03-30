// 백준 14681 - 사분면고르기

#include<iostream>

using namespace std;

int main()
{
	int x;
	int y;

	cin >> x >> y;

	if (x * y > 0)
	{
		if (x > 0)
			cout << 1;
		else
			cout << 3;
	}

	else
	{
		if (x > 0)
			cout << 4;
		else
			cout << 2;
	}
	return 0;
}