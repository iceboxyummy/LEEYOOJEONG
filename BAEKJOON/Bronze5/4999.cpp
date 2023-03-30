// น้มุ 4999 - พฦ!

#include<iostream>

using namespace std;

int main()
{
	string jae;
	string doc;

	cin >> jae >> doc;

	if (jae.size() >= doc.size()) cout << "go";
	else cout << "no";

	return 0;
}