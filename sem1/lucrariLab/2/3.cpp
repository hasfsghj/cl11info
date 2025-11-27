#include <bits/stdc++.h>
using namespace std;

int n, i;
string bune;

int main()
{
    struct carti
    {
        string nume;
        string autor;
        int pag;
        int an;
        string stare;
    };
    carti carte[100];

    cout << "nr de carti: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout<<"\n cartea nr "<<i<<endl;
        cout << "denumire: ";
        cin >> carte[i].nume;
        cout << "nume autor: ";
        cin >> carte[i].autor;
        cout << "nr de pagini: ";
        cin >> carte[i].pag;
        cout << "anul editiei: ";
        cin >> carte[i].an;
        cout << "stare: ";
        cin >> carte[i].stare;

        if (carte[i].an > 2010 && carte[i].pag > 250)
        {
            bune += carte[i].nume + ", ";
        }
    }
    bune.erase(bune.size() - 2);
    cout << "carti ce se incadreaza in criterii sunt " << bune;
}