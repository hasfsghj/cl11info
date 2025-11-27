#include <bits/stdc++.h>
using namespace std;
int n, m, A[100][100], i, j, sum, nr5, mx=A[0][0], mn=A[0][0];

int main()
{

    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    
    for (i=0; i<=n; i++)
    for (j=0; j<=m; j++)
    { cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j]; 
        sum+=A[i][j];
        mx=max(mx, A[i][j]);
        mn=min(mn, A[i][j]);
        if (A[i][j]%5==0) nr5++;
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++) {
    for (j=0; j<=m; j++)
    cout<<A[i][j]<<" ";
        cout<<endl; }
        
    cout<<"\nsuma numerelor: "<<sum<<", nr minim: "<<mn<<", nr maxim: "<<mx<<", nr divizibile cu 5: "<<nr5;

    return 0;
}