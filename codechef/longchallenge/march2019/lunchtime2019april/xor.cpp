#include<bits/stdc++.h>
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
          int n;
          in(n)
          int a[n],an[n];
          fr(i,n,0)
            in(a[i])
       int ans;
       fr(i,n,0)
       {
           ans=0;
           fr(j,n,0)
           {
               ans+=a[j]^a[i];
           }
           an[i]=ans;
       }
       ans=an[0];
      fr(i,n,0)
        {
            if(ans>an[i])
                ans=an[i];
        }
          pr ans nl                                                                             /*   int a=6,b=2;
                                                                                       int c=(int)b^a;
                                                                                       prn(c);*/
      }
  }
