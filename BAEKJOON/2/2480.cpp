#include<iostream>

using namespace std;

int getmax(int x, int y, int z);

int main()
{
	int x;
	int y;
	int z;

	int price;

	cin >> x >> y >> z;

	if (x == y || x == z)
	{
		if (y == z)
			price = 10000 + x * 1000;
		else
			price = 1000 + x * 100;
	}

	else if (y == z)
	{
		if (x == z)
			price = 10000 + z * 1000;
		else
			price = 1000 + z * 100;
	}

	else
		price = getmax(x, y, z) * 100;

	cout << price;

	return 0;
}

int getmax(int x, int y, int z)
{
	int max;
	if (x < y)
	{
		max = y;
		if (y < z)
			max = z;
	}

	else
	{
		max = x;
		if (x < z)
			max = z;
	}
	return max;
}