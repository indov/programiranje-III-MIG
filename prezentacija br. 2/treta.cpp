#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, bool>> s;
    int saatP, minP, saatK, minK, maks = 0, momen = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> saatP >> minP >> saatK >> minK;
        s.insert({saatP * 60 + minP, 0});
        s.insert({saatK * 60 + minK, 1});
    }

    for(auto i:s)
    {
        if(i.second == 0)
            momen++;
        else
            momen--;
        if(momen > maks)
            maks = momen;
    }
    cout << maks;


    return 0;
}