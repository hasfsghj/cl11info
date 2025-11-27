#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, B[100], m;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    if (i%2==1)
        if(A[i]%2==0)
        { 
        B[m]=A[i];
        m++;}
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
    
        cout<<"\nelemente pare pe locuri impare:\n";
    for (i=0; i<=m; i++)
    cout<<B[i]<<" ";
        
        return 0;
}