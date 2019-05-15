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
  vector <int> ind1;
  vector<int> con;
  vector <int> ans;
     int n,z;
     in(n)in(z)
     fr(i,n,0)
     {
        int x;
        in(x)
        if(x==1) ind1.push_back(i);
     }
     con.push_back(0);
     fr(i,ind1.size()-1,1){
         if(ind1[i]-ind1[i-1]==1)
         {
           int temp;
           temp=con[i-1]+1;
           con.push_back(temp);
         }
         else con.push_back(0);
     }
     if(ind1[0]-z<0) ans.push_back(0);
     else ans.push_back(ind1[0]-z);
     fr(i,ind1.size()-1,1){
      int temp;
      temp=ind1[i]-z-con[i];
      if(ans[i-1]<temp) ans.push_back(temp);
      else
      {
        temp=ans[i-1]+1;
        ans.push_back(temp);
      }
     }
     int temp=0;
     fr(i,n,0)
     {
       if(ans[temp]==i)
        {
          temp++;
          prn("1"<<" ")
        }
        else prn("0"<<" ")
     }
        prn("\n");
  }
  return 0;
  }
