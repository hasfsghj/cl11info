#include <bits/stdc++.h>
using namespace std;

int n, i, s1, sum1, s2, sum2, s3, sum3, s4, sum4, s5, sum5;

int main()
{
    struct apartament
    {
        int nr;
        int odai;
        double pret;
        string telefon;
    };
    apartament casa[100];

    cout << "nr anunturi ciocana: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "nr ofertei: ";
        cin >> casa[i].nr;
        cout << "nr odai: ";
        cin >> casa[i].odai;
        cout << "pret: ";
        cin >> casa[i].pret;
        cout << "telefon: ";
        cin >> casa[i].telefon;
        if (casa[i].odai == 4 && casa[i].telefon == "da")
        {
            sum1 += casa[i].pret;
            s1++;
        }
        cout << endl;
    }

    cout << "nr anunturi rascani: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "nr ofertei: ";
        cin >> casa[i].nr;
        cout << "nr odai: ";
        cin >> casa[i].odai;
        cout << "pret: ";
        cin >> casa[i].pret;
        cout << "telefon: ";
        cin >> casa[i].telefon;
        if (casa[i].odai == 4 && casa[i].telefon == "da")
        {
            sum2 += casa[i].pret;
            s2++;
        }
        cout << endl;
    }

    cout << "nr anunturi botanica: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "nr ofertei: ";
        cin >> casa[i].nr;
        cout << "nr odai: ";
        cin >> casa[i].odai;
        cout << "pret: ";
        cin >> casa[i].pret;
        cout << "telefon: ";
        cin >> casa[i].telefon;
        if (casa[i].odai == 4 && casa[i].telefon == "da")
        {
            sum3 += casa[i].pret;
            s3++;
        }
        cout << endl;
    }

    cout << "nr anunturi centru: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "nr ofertei: ";
        cin >> casa[i].nr;
        cout << "nr odai: ";
        cin >> casa[i].odai;
        cout << "pret: ";
        cin >> casa[i].pret;
        cout << "telefon: ";
        cin >> casa[i].telefon;
        if (casa[i].odai == 4 && casa[i].telefon == "da")
        {
            sum4 += casa[i].pret;
            s4++;
        }
        cout << endl;
    }

    cout << "nr anunturi buiucani: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "nr ofertei: ";
        cin >> casa[i].nr;
        cout << "nr odai: ";
        cin >> casa[i].odai;
        cout << "pret: ";
        cin >> casa[i].pret;
        cout << "telefon: ";
        cin >> casa[i].telefon;
        if (casa[i].odai == 4 && casa[i].telefon == "da")
        {
            sum5 += casa[i].pret;
            s5++;
        }
        cout << endl;
    }

    if (s1 != 0)
        cout << "pretul mediu la o casa cu 4 odai in ciocana este " << sum1 / s1;
    if (s2 != 0)
        cout << "pretul mediu la o casa cu 4 odai in rascani este " << sum2 / s2;
    if (s3 != 0)
        cout << "pretul mediu la o casa cu 4 odai in botanica este " << sum3 / s3;
    if (s4 != 0)
        cout << "pretul mediu la o casa cu 4 odai in centru este " << sum4 / s4;
    if (s5 != 0)
        cout << "pretul mediu la o casa cu 4 odai in buiucani este " << sum5 / s5;
}