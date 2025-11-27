#include <bits/stdc++.h>
using namespace std;

int n, i, a[500], b[1000000], sum;

int main()
{
    ifstream fin("puteri2.in");
    ofstream fout("puteri2.out");

    fin >> n;

    for (i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        fin >> b[i];
        sum += pow(a[i], b[i]);
    }

    fout << sum % 100019 << endl;

    fin.close();
    fout.close();
    return 0;
}