// 백준 1085 직사각형 탈출

#include<iostream>

using namespace std;

int main() 
{
	int x, y, w, h;
	int min;

	cin >> x >> y >> w >> h;

	if (x < y) min = x;
	else min = y;

	if (w - x < min) min = w - x;
	if (h - y < min) min = h - y;

	cout << min;

	return 0;
}