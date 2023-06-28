// น้มุ 8958 - OXฤ๛ม๎

#include<iostream>

using namespace std;

int score(int O);

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string str;
		cin >> str;

		int count_O = 0;
		int sum_score = 0;

		for (int j = 0; j < 80; j++)
		{
			if (str[j] == 'O')
				count_O++;

			else if (str[j] == '\0')
			{
				sum_score += score(count_O);
				break;
			}

			else
			{
				sum_score += score(count_O);
				count_O = 0;
			}
		}
		cout << sum_score << endl;
	}
	return 0;
}

int score(int O)
{
	int score = 0;

	for (int i = 1; i <= O; i++)
		score += i;

	return score;
}