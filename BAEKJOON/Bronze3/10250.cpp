// 백준 10250 - ACM호텔

#include<iostream>

using namespace std;

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int H, W, N;

		cin >> H >> W >> N;

		int XX = N % H;
		int YY = (N / H) + 1;

		printf("%d%02d\n", XX, YY);
	}
	return 0;
}