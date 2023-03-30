// ¹éÁØ 3003 - Å·, Äı, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù

#include<iostream>

using namespace std;

int main()
{
	int chess[6] = { 1,1,2,2,2,8 };


	for (int i = 0; i < 6; i++)
	{
		int temp;

		cin >> temp;

		chess[i] -= temp;
	}

	for (int j = 0; j < 6; j++)
		cout << chess[j] << " ";

	return 0;
}