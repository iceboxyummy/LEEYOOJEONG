#include<iostream>

using namespace std;

int main()
{
	int H;
	int M;

	cin >> H >> M;

	if (M - 45 < 0)
	{
		if (H - 1 < 0)
			cout << "23 " << M + 15;
		else
			cout << H - 1 << " " << M + 15;
	}
	else
		cout << H << " " << M - 45;

	return 0;
}