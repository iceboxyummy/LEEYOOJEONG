// 백준 14581 - 팬들에게 둘러싸인 홍준

#include<iostream>

using namespace std;

int main()
{
	string ID;
	cin >> ID;

	cout << ":fan::fan::fan:" << endl;
	cout << ":fan::" << ID << "::fan:" << endl;
	cout << ":fan::fan::fan:";
	return 0;
}