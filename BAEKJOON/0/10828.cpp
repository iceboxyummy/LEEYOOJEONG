// 백준 10828 스택

#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> my_stack;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        
        if (str == "push")
        {
            int data;
            cin >> data;
            my_stack.push(data);
        }

        else if (str == "pop")
        {
            if (my_stack.empty() == true)
                cout << "-1" << endl;

            else
            {
                cout << my_stack.top() << endl;
                my_stack.pop();
            }
        }

        else if (str == "size")
            cout << my_stack.size() << endl;

        else if (str == "empty")
        {
            if (my_stack.empty() == true)
                cout << "1" << endl;

            else cout << "0" << endl;
        }

        else if (str == "top")
        {
            if (my_stack.empty() == true)
                cout << "-1" << endl;

            else
                cout << my_stack.top() << endl;
        }
    }
    return 0;
}