#include <bits/stdc++.h>
using namespace std;

int n, i;
string e;

int main()
{
    struct pers
    {
        string nume;
        string prenume;
        double media;
    };

    cout << "nr de elevi: ";
    cin >> n;

    pers elev[100];
    for (i = 1; i <= n; i++)
    {
        cout << i << " elev nume: ";
        cin >> elev[i].nume;
        cout << i << " elev prenume: ";
        cin >> elev[i].prenume;
        cout << i << " elev medie: ";
        cin >> elev[i].media;
        if (elev[i].media >= 9)
            e = e + elev[i].nume + " " + elev[i].prenume + ", ";
    }
    e.erase(e.size() - 2);
    cout << "elevii cu note >=9 sunt " << e;
}
