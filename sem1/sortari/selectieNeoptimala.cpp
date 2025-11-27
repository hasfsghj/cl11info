#include <bits/stdc++.h>
using namespace std;
int A[100], n, i;
int main()
{
    cout<<"n="; cin>>n;
    for (i=0; i<=n-1; i++)
    {cout<<"A["<<i<<"]="; cin>>A[i];}
    cout<<"tabloul: ";
    
    for (i=0; i<=n-1; i++)
    cout<<A[i]<<" "; cout<<endl;

    for (i=0; i<=n-2; i++)
    for(int j=i+1; j<=n-1; j++)
    if (A[j]<A[i])
    swap (A[i], A[j]);

        for (i=0; i<=n-1; i++)
        cout<<A[i]<<" ";
    
    return 0;
}