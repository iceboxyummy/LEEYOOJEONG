// 백준 2098 - 상수

#include<iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	int a = (A % 10) * 100 + ((A % 100) / 10) * 10 + A / 100;
	int b = (B % 10) * 100 + ((B % 100) / 10) * 10 + B / 100;

	if (a > b) cout << a;
	else cout << b;

	return 0;
}