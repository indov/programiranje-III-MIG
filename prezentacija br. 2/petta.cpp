#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, najdolg;
    cin >> s;
    map<string, int> m;
    for(int i = 0; i < s.size(); i++)
    {
        for(int j = 0; j < s.size() - i; j++)
        {
            string sub = s.substr(j, i + 1);
            m[sub]++;
            if(m[sub] >= m[najdolg])
            {
                if(sub.size() > najdolg.size())
                    najdolg = sub;
                if(m[sub] > m[najdolg])
                    najdolg = sub;
            }
        }
    }
    cout << najdolg;
    return 0;
}