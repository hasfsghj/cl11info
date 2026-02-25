#include <bits/stdc++.h>
using namespace std;
int n, m, A[10][15], i, j,sum,mx,mn,k,c,q,aSuma,aMx,b,B[10];
string s;

int main()
{

    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    
    for (i=1; i<=n; i++)
    for (j=1; j<=m; j++)
    { cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j]; }

        cout << "avem tabloul:\n";
        for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << setw(5) << A[i][j] << " ";

            sum += A[i][j];
            mx = max(mx, A[i][j]);
            mn = min(mn, A[i][j]);

            if (A[i][j] >= 2) {
                int k = 0;
                for (c = 1; c <= A[i][j]; c++)
                    if (A[i][j] % c == 0)
                        k++;

                if (k == 2)
                    q++;
            }
        }
        cout << endl;
    }
        
        cout<<endl<<sum<<" - suma\n"<<mx<<" - nr max\n"<<mn<<" - nr min\n"<<q<<" - total nr prime";
        
        aMx = 0;
        mx = abs(mx);
        
        while (mx > 0) {
            int r = mx % 16;
            if (r < 10) s += char('0'+r);
            else s += char('A'+r-10);
         mx /= 16;
        }
        reverse(s.begin(), s.end());
        
        aSuma = 0;
        sum = abs(sum);

        while (sum) {
          if (sum % 2 == 0) {
              aSuma*=10;
          } else {
              aSuma=aSuma*10+1;
          }
          sum/=2;
        }
        
        cout<<"\n\nsuma in baza 2 = "<<aSuma<<"\nnr max in baza 16 = "<<s;
    
        // for(int g = 1; g<=n; g++){
        // for (int d = 1; d<n-1; d++) {
        //     for (int f = 1; f<n-d-1; f++) {
        //       if (A[g][f] > A[g][f + 1])
        //           swap(A[g][f], A[g][f + 1]);
        //     }
        // } 
        // }
        
        // cout << "\n\navem tabloul ordonat:\n";
        // for (i = 1; i <= n; i++) {
        // for (j = 1; j <= m; j++) {
        //     cout << setw(5) << A[i][j] << " ";} 
        //     cout<<endl;
        // }
        
    return 0;
}