#include <bits/stdc++.h>
using namespace std;
int A[100], n, i, x, j;
int main()
{
    cout<<"n="; cin>>n;
    for (i=0; i<=n-1; i++)
    {cout<<"A["<<i<<"]="; cin>>A[i];}
    cout<<"tabloul: ";
    
    for (i=0; i<=n-1; i++)
    cout<<A[i]<<" "; cout<<endl;
    
    for (i=1; i<=n-1; i++)
        {x=A[i]; j=i-1;
        while (j>=0 && x<A[j]) {A[j+1]=A[j]; j--;
        A[j+1]=x; }}
        
        for (i=0; i<=n-1; i++)
        cout<<A[i]<<" ";
    
    return 0;
}