#include <bits/stdc++.h>
using namespace std;

int n, m, i, j, comun, a[10000000], b[10000000], c[10000000], d[10000000];

int main()
{
    ifstream fin("complot.in");
    ofstream fout("complot.out");

    fin >> n;

    for (i = 0; i < n; i++)
    {
        fin >> a[i] >> b[i];
    }

    fin >> m;

    for (i = 0; i < m; i++)
    {
        fin >> c[i] >> d[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            int start = max(a[i], c[j]);
            int finis = min(b[i], d[j]);
            if (start < finis)
            {
                comun += finis - start;
            }
        }
    }

    fout << comun << endl;

    fin.close();
    fout.close();
    return 0;
}