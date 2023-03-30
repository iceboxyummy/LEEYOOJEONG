// 백준 27889 - 특별한 학교이름

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;

	cin >> str;

	if (str == "NLCS") cout << "North London Collegiate School";
	else if (str == "BHA") cout << "Branksome Hall Asia";
	else if (str == "KIS") cout << "Korea International School";
	else if (str == "SJA") cout << "St. Johnsbury Academy";

	return 0;
}