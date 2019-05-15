/*#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll long long
using namespace std;

int main()
{
    int t;
    in(t)
    lo
    {
        int n,suma=0,sumb=0;
        in(n)
        int a[n],b[n],c[n+2];
        fr(i,n,0)
        {
            int x;
            in(x)
            a[i]=x;
            suma+=x;
        }
        fr(i,n,0)
        {
          int x;
            in(x)
            b[i]=x;
            sumb+=x;
        }
        int ans=sumb;
        c[1]=sumb;
        for(int i=2;i<=n+1;i++)
        {
            c[i]=a[i-2]+c[i-1]-b[i-2];
            if(c[i]>ans)
                ans=c[i];
        }
        pr ans nl
    }
    return 0;
}*/
