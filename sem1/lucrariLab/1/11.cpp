#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, mx=A[0],m,k=1;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    m=mx;
        mx=max(mx,A[i]);
        if (m!=mx) k=0;
        else if (A[i]==mx) k++;
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
    
        if (k) cout<<"\nnr maxim apare de atatea ori: "<<k+1;
        
        return 0;
}