// 백준 10430 - 나머지

#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int C;

    cin >> A >> B >> C;

    cout << (A + B) % C << endl;
    cout << ((A % C) + (B % C)) % C << endl;
    cout << (A * B) % C << endl;
    cout << ((A % C) * (B % C)) % C << endl;

    return 0;
}