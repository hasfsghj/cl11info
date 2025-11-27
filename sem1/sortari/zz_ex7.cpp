#include <bits/stdc++.h>
using namespace std;
int A[100], n, i, j, k, m;
int main()
{
    cout<<"n="; cin>>n;
    for (i=0; i<=n-1; i++)
    {cout<<"A["<<i<<"]="; cin>>A[i];}
    
    cout<<"tabloul: ";
    
    for (i=0; i<=n-1; i++)
    cout<<A[i]<<" "; cout<<endl;
    
    cout<<"cifra = "; cin>>m;
    
    int B[n]; B[0]=m;
    for (i=1; i<=n-1; i++)
    B[i]=A[i];
    
    for (i=1; i<=n-1; i++)
        if (A[i]<A[i-1]) k++;
        if (k>0) cout<<"nu e crescator\n";
        else {
            for (i=1; i<=n-1; i++)
        for (j=0; j<=n-2; j++)
        if (B[j+1]<B[j]) swap (B[j], B[j+1]);
        }
    
        for (i=0; i<=n-1; i++)
        cout<<B[i]<<" ";
    
    return 0;
}