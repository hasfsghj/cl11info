#include <bits/stdc++.h>
using namespace std;
int lit_m, lit_M, cif, sum, car;
string S;

int main()
{

    cout<<"string = "; cin>>S;
    for (int i=0; i<S.size(); i++)
    switch (S[i]) {
    case '0'...'9':
    {cif++; sum+=int(S[i]-48);
    break;}
    case 'a'...'z':
    {lit_m++; break;}
    case 'A'...'Z':
    {lit_M++; break;}
    default:
    car++;
    }
    
        if (S.find('@', 0)>S.size()) cout<<"\nnu este @ in sir";
        else cout<<"\nprimul @ este nr "<<S.find('@', 0);
    
    cout<<"\nnr de litere mici: "<<lit_m<<", nr litere mari: "<<lit_M<<", nr de cifre: "<<cif<<", nr de caractere:"<<car;
    if (cif==1) cout<<"\nsuma are o singura cifra: "<<sum; else cout<<"\nsuma: "<<sum;
    
    return 0;
}