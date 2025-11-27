#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, y, B[100], mx=B[0];

int main()
{

    cout<<"n="; cin>>n;
    cout<<"y="; cin>>y;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    if (y==A[i]){
        B[i]=i;
        mx=max(mx,B[i]);
        }
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
        if (mx) cout<<"\nultimul nr =y e in pozitia "<<mx;
        else cout<<"\nnu sunt nr =y";
        
        return 0;
}