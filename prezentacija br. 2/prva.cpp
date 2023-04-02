#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> iz;
    char inp;
    int a, b;
    cin >> inp;
    while(inp != '=')
    {
        if(inp == '+' || inp == '-' || inp == '*')
        {
            a = iz.top();
            iz.pop();
            b = iz.top();
            iz.pop();
            if(inp == '+')
                iz.push(a + b);
            else if(inp == '-')
                iz.push(a - b);
            else if(inp == '*')
                iz.push(a * b);
        }
        else
            iz.push(inp - '0');
        cin >> inp;
    }

    cout << iz.top();

    return 0;
}