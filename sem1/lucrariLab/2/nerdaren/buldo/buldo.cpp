#include <bits/stdc++.h>
using namespace std;

int n, i, h[1000000], c, H;

int main()
{
    ifstream fin("buldo.in");
    ofstream fout("buldo.out");

    fin >> n;

    for (i = 0; i < n; i++)
    {
        fin >> h[i];
        for (H = 100; H >= 0; H--)
        {
            if (h[i] >= H)
                c += h[i] - H;
            else
                c -= H - h[i];
            if (c > 0)
                break;
        }
    }

    fout << H << endl;

    fin.close();
    fout.close();
    return 0;
}