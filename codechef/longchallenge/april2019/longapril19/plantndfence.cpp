/*
#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll long long
#define grid(x,y) grid[x][y]

using namespace std;
int main()
{
    int t;
    in(t)
    lo
    {
        int n,m,l,ans=0;
        in(n)
        in(m)
        in(l)
        int grid(n+1,m+1)={0};
        int plant[l+1][2]={0};
        fr(i,l,1)
           {
               int x,y;
               in(x)in(y)
               grid(x,y)=1;
               plant[i][0]=x;
               plant[i][1]=y;
           }
        fr(i,l,1)
        {
            int x,y;
            x=plant[i][0];
            y=plant[i][1];
            if(x==1 || y==1 || x==n || y==m)
            {
                if((x==1 && y==1) || (x==n && y==1) || (x==1 && y==m) || (x==n && y==m))
                   ans+=2;
                else
                    ans++;
            }
          if((x+1)<=n && grid(x+1,y)==0 )
            ans++;
          if((x-1)>=1 && grid(x-1,y)==0)
            ans++;
          if((y+1)<=m && grid(x,y+1)==0)
            ans++;
          if((y-1)>=1 && grid(x,y-1)==0)
            ans++;
        }
        pr ans nl
    }
    return 0;
}
/*1
3 3 9
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3*/

