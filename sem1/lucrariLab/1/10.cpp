#include <bits/stdc++.h>
using namespace std;
int n, A[100], i;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++){
        if (i%2==1) A[i]=i;
        else A[i]=10;}

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
        
        return 0;
}