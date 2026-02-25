#include <bits/stdc++.h>
using namespace std;
int n, A[1000000], i,m,a;

int main()
{

    ifstream fin("aparitii.in");
    ofstream fout("aparitii.out");

    fin>>i;
    n=2*i-1;
    
    for (i=0; i<=n; i++)
    { fin>>A[i]; 
    a^=A[i];}

    fout<<a;

    fin.close();
    fout.close();
        return 0;
}