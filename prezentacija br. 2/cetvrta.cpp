#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string korisnik, pass;
    map<string, string> m;
    for(int i = 0; i < n; i++)
    {
        cin >> korisnik >> pass;
        m[korisnik] = pass;
    }

    cin >> korisnik;
    while(korisnik != "KRAJ")
    {
        cin >> pass;
        if(m[korisnik] == pass)
        {
            cout << "Najaven ";
            break;
        }
        cout << "Nenajaven ";
        cin >> korisnik;
    }

    return 0;
}