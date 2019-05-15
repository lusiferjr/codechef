/*#include<bits/stdc++.h>
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
        int n;
        in(n)
        ll x[n],y[n];
        fr(i,n,0)
        {
            in(x[i])in(y[i])
        }
        ll neg[n],pos[n];
        fr(i,n,0)
        {
            pos[i]=y[i]-x[i];
            neg[i]=y[i]+x[i];
        }
       sort(pos,pos+n);
       sort(neg,neg+n);
       ll dx=pos[1]-pos[0],dy=neg[1]-neg[0];
       for(int i=0;i<n-1;i++)
       {
           ll x,y;
           x=pos[i+1]-pos[i];
           y=neg[i+1]-neg[i];
           if(dx>x) dx=x;
           if(dy>y) dy=y;
       }
       double ans;
       if(dy<=dx) ans=(double)dy/(double)2.000000; else ans=(double)dx/(double)2.000000;
       cout<<fixed<<setprecision(6)<<ans nl
    }
    return 0;
}*/
