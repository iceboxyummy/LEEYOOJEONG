#include<iostream>

using namespace std;

int main()
{
	int A;
	int B;

	cin >> A >> B;

	if (A > B) cout << ">";
	if (A < B) cout << "<";
	if (A == B) cout << "==";

	return 0;
}