#include <bits/stdc++.h>
using namespace std;
int n, A[20], i, mx=A[0], mn=A[0];

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    mx=max(mx,A[i]);
        mn=min(mn,A[i]);
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
        cout<<"\nnr max: "<<mx<<", nr min: "<<mn;
        
        return 0;
}