#include <bits/stdc++.h>
using namespace std;
int n, note[41], i, nr;

int main()
{

    cout<<"nr note = "; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"nota nr "<<i<<" = "; cin>>note[i];
    if(note[i]==9 || note[i]==10) nr++;}

        cout<<"notele:\n";
    for (i=0; i<=n; i++)
    cout<<note[i]<<" ";
        cout<<"\nnr de note de 9 sau 10: "<<nr;
        
    return 0;
}