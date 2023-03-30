// น้มุ 2588 - ฐ๖ผภ

#include <iostream>

using namespace std;

int main()
{
	int num1;
	int num2;

	cin >> num1 >> num2;
	cout << num1 * ((num2 % 100) % 10) << endl;
	cout << num1 * ((num2 % 100) / 10) << endl;
	cout << num1 * (num2 / 100) << endl;
	cout << num1 * num2 << endl;

	return 0;
}