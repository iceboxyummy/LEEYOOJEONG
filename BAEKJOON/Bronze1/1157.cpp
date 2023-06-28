// 백준 1157 - 단어공부

#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>

using namespace std;

int main()
{
	int arr1[26] = { 0 };
	int max = 0;

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] > 96)
			arr1[str[i] - 97]++;
		else
			arr1[str[i] - 65]++;
	}

	int arr2[26];

	copy(arr1, arr1 + 26, arr2);
	sort(arr2, arr2 + 26, greater<>());

	if (arr2[0] == arr2[1])
	{
		cout << "?";
		return 0;
	}

	for (int j = 0; j < 26; j++)
	{
		if (arr1[j] == arr2[0])
		{
			printf("%c", 'A' + j);
			break;
		}
	}
	return 0;
}