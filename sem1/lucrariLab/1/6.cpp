#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, B[100];

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
    
        cout<<"\ninversat:\n";
    for (i=n; i>=0; i--)
    cout<<A[i]<<" ";
        
        return 0;
}