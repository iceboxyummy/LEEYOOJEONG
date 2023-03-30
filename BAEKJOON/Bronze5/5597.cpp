// 백준 5597 - 과제 안내신분..?

#include <iostream>

using namespace std;

int main()
{
	bool student[31] = { false };

	int n;

	for (int i = 1; i <= 28; i++)
	{
		cin >> n;

		student[n] = true;
	}

	for (int j = 1; j <= 30; j++)
	{
		if (student[j] == false)
			cout << j << endl;
	}

	return 0;
}