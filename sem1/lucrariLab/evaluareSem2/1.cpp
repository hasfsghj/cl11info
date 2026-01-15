#include <bits/stdc++.h>
using namespace std;
int n, A[50], i,sumPr,c,mx,mn,j, B[50],k;
bool cr;

int main()
{

    cout<<"n="; cin>>n;
    
    for (i=0; i<=n; i++)
    { cout<<"A["<<i<<"]="; cin>>A[i]; }

        cout<<"avem tabloul:\n";
    for (i=0; i<=n; i++)
    cout<<A[i]<<" ";
        
        for (j = 0; j <= n; j++) {
            c=0;
            
            if (A[j]%2!=0)
                mn=min(mn,A[j]);
            else
                mx=max(mx,A[j]);
                
        if (A[j]>=2){    
        for (i=1; i<=A[j]; i++) {
            if (A[j] % i == 0)
                c++; 
        }
        if (c==2) {
            sumPr+=A[j];
            k++;
        }
        }
        }
        
        
        cout<<"\n\nsuma nr prime = "<<sumPr<<", total nr prime = "<<k;
        if (k!=0) cout<<", media nr prime = "<<sumPr/k;
        cout<<"\nnr min impar = "<<mn<<", nr max par = "<<mx;
        
        i=0;
        while (i<=n) {
            if (A[i]%3==0) {
                j=A[i];
                break; }
            else
                i++;
        }
        
        cout<<"\nprimul nr divizibil cu 3 = "<<j;
        
        for (j = 0; j <= n; j++) {
            
            if (A[j] < A[j+1]) {
                cr = false;
                break;
            }
        }
        
        if (cr) {
            reverse(begin(A), end(A));
            
            cout<<"\n\navem tabloul inversat:\n";
                for (i=0; i<=n; i++)
                cout<<A[i]<<" "; }
                
        else {
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (A[j] >= A[j + 1])
                        swap(A[j], A[j + 1]);
                }
            }
            
            cout<<"\n\navem tabloul ordonat:\n";
                for (i=0; i<=n; i++)
                    cout<<A[i]<<" "; 
                    
                for (i=0; i<=n; i++)
                    if (A[i]%2==0) {
                        k=A[i];
                        break;
                    }
                cout<<"\nprimul nr par = "<<k;
        }
        
        return 0;
}