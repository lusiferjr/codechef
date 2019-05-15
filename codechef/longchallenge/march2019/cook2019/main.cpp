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
        int n,l[6]={0};
        in(n)
        fr(i,n,0)
        {
            string a;
            in(a)
            fr(i,a.size(),0)
               {
                   if(a[i]=='c')
                      l[0]+=1;
                    else if(a[i]=='e')
                      l[1]+=1;
                   else if(a[i]=='o')
                    l[2]+=1;
                   else if(a[i]=='d')
                    l[3]+=1;
                    else if(a[i]=='h')
                        l[4]+=1;
                    else if(a[i]=='f')
                    l[5]+=1;
               }
        }
        l[0]/=2;
        l[1]/=2;
        int ans=l[0];
        fr(i,6,0)
           {
               if(ans>l[i])
                ans=l[i];
           }
        pr ans nl
    }
}
