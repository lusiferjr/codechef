/*
#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n) for(int i=0;i<n;i++)

using namespace std;

 int main()
 {
     int t;
     in(t)
     lo
     {
         vector <int> no;
         no.push_back(0);
         int n,ans=0;
         in(n)
         string a;
         in(a)
         char b;
         in(b)
         int temp=0;
         fr(i,n)
             {
              if (a[i]==b)
              {
                 temp++;
                 no.push_back(i+1);
              }
             }
             for(unsigned int i=1;i<no.size();i++)
             {
                 int r,l;
                 l=no[i]-no[i-1]-1;
                 r=n-no[i];
                 ans=ans+r+l+(r*l);
             }
             pr ans+no.size()-1 nl
     }
     return 0;
}
*/
