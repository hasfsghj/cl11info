#include <bits/stdc++.h>
using namespace std;

int n, A[100000], i, c, k, p;
string s, z;

int main()
{
    ifstream fin("aur.in");
    ofstream fout("aur.out");

    fin >> c;

    if (c == 1)
        fin >> n;
    else if (c == 2)
        fin >> n >> k;
    else
        fin >> n >> p;

    for (i = 0; i < n; i++)
    {
        fin >> A[i];
        s = to_string(A[i]);
        z += s;
    }

    if (c == 1)
    {
        fout << z.length();
    }
    else if (c == 2)
    {
        fout << z[k - 1];
    }
    else if (c == 3)
    {
        string maxim = "";

        for (i = 0; i + p <= z.length(); i++)
        {
            string curent = z.substr(i, p);
            if (curent > maxim)
                maxim = curent;
        }

        fout << maxim;
    }

    fin.close();
    fout.close();
    return 0;
}
