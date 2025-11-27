#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, B[100], C[200],m,j;

int main()
{

    cout<<"n="; cin>>n;
    m=n*2;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    cout<<"B["<<i<<"]="; cin>>B[i];}

    for (j=0; j<=m; j++) {
            for (i=0; i<=n; i++) {
            if (j%2==1) C[j]=A[i];
            else C[j]=B[i]; }
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=m; i++)
    cout<<C[i]<<" ";
        
        return 0;
}

NU MERGE