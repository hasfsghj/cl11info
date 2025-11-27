#include <bits/stdc++.h>
using namespace std;
int A[100], n, i, j, B[100], C[100];
int main()
{
    cout<<"n="; cin>>n;
    for (i=0; i<=n-1; i++)
    {cout<<"A["<<i<<"]="; cin>>A[i];
        if (A[i]>=0) B[i]=A[i];
        else C[i]=A[i];
    }
    
    for (i=0; i<=n-1; i++)
        cout<<C[i]<<" ";
        
            for (i=0; i<=n-1; i++)
        cout<<B[i]<<" ";
    
    cout<<"tabloul: ";
    
    for (i=0; i<=n-1; i++)
    cout<<A[i]<<" "; cout<<endl;
    
    for (i=1; i<=n-1; i++)
        for (j=0; j<=n-2; j++)
        if (B[j+1]<B[j]) swap (B[j], B[j+1]);
        
            for (i=0; i<=n-2; i++)
            for(int j=i+1; j<=n-1; j++)
            if (C[j]>C[i])
            swap (C[i], C[j]);
        
    
        
        for (i=0; i<=n-1; i++)
        cout<<C[i]<<" ";
        
            for (i=0; i<=n-1; i++)
        cout<<B[i]<<" ";
    
    return 0;
}