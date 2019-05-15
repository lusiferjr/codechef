#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll long long
#define mod(x) x%1000000007;
using namespace std;
int main()
{
    int t;
    in(t)
    lo
    {
        int n,z;
        in(n)in(z)
        int num[n];
        fr(i,n,0) in(num[i])
       fr(i,z,0)
       {
           for(int j=0;j<n-1;)
           {
               if(num[j]==0 && num[j+1]==1)
               {
                  num[j]=1;
                  num[j+1]=0;
                  j=j+2;
               }
               else j+=1;
           }
            fr(i,n,0) prn(num[i]<<" ")
                prn("\n")
       }
       fr(i,n,0) prn(num[i]<<" ")
       prn("\n")
    }
    return 0;
}
