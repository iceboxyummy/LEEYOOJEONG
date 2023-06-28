// 백준 10809 - 알파벳 찾기

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int arr[26];

	for (int x = 0; x < 26; x++)
		arr[x] = -1;

	for (int j = 0; j < str.size(); j++)
	{
		for (int i = 0; i < 26; i++)
		{
			if ((arr[i] + (98 + i)) == str[j])
			{
				if (arr[i] == -1)
					arr[i] = j;				
			}
		}
	}

	for (int k = 0; k < 26; k++)
		cout << arr[k] << " ";

	return 0;
}