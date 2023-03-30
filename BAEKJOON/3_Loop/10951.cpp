// น้มุ 10951 A+B

#include<iostream>

using namespace std;

int main()
{
	int A;
	int B;

	while (true)
	{
		cin >> A >> B;

		if (A == 0 && B == 0)
			break;

		cout << A + B << endl;
	}
	return 0;
}