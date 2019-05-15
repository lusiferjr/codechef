/*#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll long long
#define grid(x,y) grid[x][y]
using namespace std;
 multimap <int , int > plant;
  int bs (int x,int y)
   {
        multimap<int , int >::iterator ptr1;
        multimap<int , int >::iterator ptr2;
        int q=0;
                 ptr1 = plant.lower_bound(x);
                 ptr2= plant.upper_bound(x);
                 while (ptr1 != ptr2)
                   {
                    if (ptr1 -> first == x && ptr1->second ==y)
                         q=1;
                         ptr1++;
                    }
                 return q;
   }
int main()
{
    int t;
    in(t)
    lo
    {

       int n,m,k,ans=0;
        in(n)in(m)in(k)
        plant.clear();
        if(n<=1000 && m<=1000)
        {
        int grid(n+1,m+1)={0};
        int plan[k+1][2]={0};
        fr(i,k,1)
           {
               int x,y;
               in(x)in(y)
               grid(x,y)=1;
               plan[i][0]=x;
               plan[i][1]=y;
           }
        fr(i,k,1)
        {
            int x,y;
            x=plan[i][0];
            y=plan[i][1];
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
        else{
        fr(i,k,0)
        {
            int x,y;
            in(x)in(y)
            plant.insert(pair<int , int >(x,y));
        }
             multimap<int , int >::iterator ptr;
     for(ptr=plant.begin();ptr!=plant.end();ptr++)
     {
         int x,y,temp=0;
         x=ptr->first;y=ptr->second;
                if((x+1)<=n && bs(x+1,y))
                   temp++;
                if((x-1)>=1 && bs(x-1,y))
                   temp++;
                if((y+1)<=m && bs(x,y+1))
                   temp++;
                if((y-1)>=1 && bs(x,y-1))
                    temp++;
                ans=ans+(4-temp);

    }
    pr ans nl
        }
   }
   return 0;
}*/
