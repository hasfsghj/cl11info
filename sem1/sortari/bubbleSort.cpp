#include <bits/stdc++.h>
using namespace std;
int A[100], n, i, j;
int main()
{
    cout<<"n="; cin>>n;
    for (i=0; i<=n-1; i++)
    {cout<<"A["<<i<<"]="; cin>>A[i];}
    cout<<"tabloul: ";
    
    for (i=0; i<=n-1; i++)
    cout<<A[i]<<" "; cout<<endl;
    
    for (i=1; i<=n-1; i++)
        for (j=0; j<=n-2; j++)
        if (A[j+1]<A[j]) swap (A[j], A[j+1]);
        
            for (i=0; i<=n-1; i++)
        cout<<A[i]<<" ";
    
    return 0;
}