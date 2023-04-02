#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<pair<int, string>> p;
    string ime, prezime;
    int a, b, c;
    for(int i = 0; i < n; i++)
    {
        cin >> ime >> prezime >> a >> b >> c;
        p.push({4 * a + 2 * b + c, ime + " " + prezime});
    }
    while(!p.empty())
    {
        auto node = p.top();
        a = node.first;
        ime = node.second;
        cout << ime << endl;
        if(a >= 4)
            a -= 4;
        else if(a >= 2)
            a -= 2;
        else
            a -= 1;
        p.pop();
    }
    return 0;
}