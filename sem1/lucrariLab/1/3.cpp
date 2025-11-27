#include <bits/stdc++.h>
using namespace std;
int n, A[10],B[10], i;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    B[i]=A[i];}

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<B[i]<<" ";
        
        return 0;
}