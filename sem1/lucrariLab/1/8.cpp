#include <bits/stdc++.h>
using namespace std;
int n, X[100], i, Y[100],m;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"X["<<i<<"]="; cin>>X[i];
    if (X[i]>0) { Y[m]=X[i];m++;} }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<X[i]<<" ";
    
        cout<<"\nnr pozitive:\n";
    for (i=0; i<=m; i++)
    cout<<Y[i]<<" ";
        
        return 0;
}