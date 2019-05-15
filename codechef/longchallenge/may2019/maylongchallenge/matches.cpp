/*#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll unsigned long long
#define mod(x) x%1000000007;
using namespace std;
ll counter;
int main()
{
 int t;
 in(t)
 lo
 {
     counter =0;
     ll n,m,tem=0;
     in(n)in(m)
     vector <int> te;
     if(n<m)
     {
         n=n+m;
         m=n-m;
         n=n-m;
     }
     if(n%m==0)
        pr"Ari"nl
     else if (n==m)
        pr"Ari"nl
     else
    {
         while(n>1 && m>1)
         {

             ll temp;
             if(n%m==0 && m!=1)
             break;
             counter++;
             tem=(n/m)-1;
             te.push_back(tem);
             temp=m;
             m=n%m;
             n=temp;
         }
        int flag=1;
        for(int i=te.size()-1;i>=0;i--)
            {
                if(flag==1 && te[i]==0)
                   flag=0;
                else if(flag==0 && te[i]>0)
                    flag=1;
                else if(flag==1 && te[i]>0)
                    flag=1;
                else if(flag==0 && te[i]==0)
                    flag=1;

            }
        if(flag==1)
            pr"Ari" nl
        else
            pr "Rich" nl
     }
 }
 return 0;
}*/
