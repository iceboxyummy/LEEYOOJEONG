// 백준 4153 - 직각삼각형

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[4] = { 0 };

	while(1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> arr[i];

			arr[3] += arr[i];

			arr[i] *= arr[i];
		}

		if (arr[3] == 0)
			return 0;

		else
			arr[3] = 0;

		sort(arr, arr + 3);

		if (arr[0] + arr[1] == arr[2])
			cout << "right" << endl;

		else
			cout << "wrong" << endl;	
	}
	return 0;
}