#include <bits/stdc++.h>
using namespace std;

int n, i;
double x;

int main()
{
    struct per
    {
        string nume;
        double bani;
    };

    cout << "nr de persoane: ";
    cin >> n;
    per pers[100];
    for (i = 0; i <= n; i++)
    {
        cout << "numele: ";
        cin >> pers[i].nume;
        cout << "salariu: ";
        cin >> pers[i].bani;

        if (pers[i].bani <= 100)
            x = pers[i].bani;
        else if (pers[i].bani >= 100.1 && pers[i].bani <= 399.99)
            x = pers[i].bani / 87 * 100;
        else if (pers[i].bani >= 400 && pers[i].bani <= 599.99)
            x = pers[i].bani / 75 * 100;
        else if (pers[i].bani >= 600)
            x = pers[i].bani / 70 * 100;

        cout << "salariul lui " << pers[i].nume << " fara impozite este " << x << endl;
    }
}