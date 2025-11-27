#include <bits/stdc++.h>
using namespace std;
int n, m, A[100][100], i, j;

int main()
{

    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    
    for (i=0; i<=n; i++)
    for (j=0; j<=m; j++)
    { cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j]; }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++) {
    for (j=0; j<=m; j++)
    cout<<setw(5)<<A[i][j]<<" ";
        cout<<endl; }
        
    return 0;
}