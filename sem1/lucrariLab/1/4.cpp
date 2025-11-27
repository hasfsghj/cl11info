#include <bits/stdc++.h>
using namespace std;
int n, A[100], i, sum, prod, dif;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i];
    if (A[i]>0)
        {sum+=A[i]; prod*=A[i]; dif-=A[i];}
    }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
        cout<<"\nsuma: "<<sum<<", produsul: "<<prod<<", diferenta: "<<dif;
        
        return 0;
}