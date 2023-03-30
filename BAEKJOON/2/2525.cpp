#include <iostream>

using namespace std;

int main()
{
	int A;
	int B;
	int C;

	cin >> A >> B >> C;

	int H = C / 60;
	int M = C % 60;

	A += H;
	B += M;

	if (B >= 60)
	{
		B -= 60;
		A++;
	}

	if (A >= 24)
	{
		A %= 24;
	}

	cout << A << " " << B;

	return 0;
}