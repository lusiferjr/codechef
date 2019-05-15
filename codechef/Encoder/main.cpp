#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check (int a[][2],int x,int y,int n)
{
    int fl=0;
     for(int i=0;i<n;i++)
        {
            if((a[i][0]==x+2 && a[i][1]==y+1)||
               (a[i][0]==x+2 && a[i][1]==y-1)||
               (a[i][0]==x-2 && a[i][1]==y-1)||
               (a[i][0]==x-2 && a[i][1]==y+1)||
               (a[i][0]==x+1 && a[i][1]==y+2)||
               (a[i][0]==x-1 && a[i][1]==y+2)||
               (a[i][0]==x+1 && a[i][1]==y-2)||
               (a[i][0]==x-1 && a[i][1]==y-2))
            {
                fl=1;
                break;
            }
            }
            return fl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
        cin>>a[i][0];
        cin>>a[i][1];
        }
        int x,y;
        cin>>x>>y;
       flag=check(a,x,y,n);
        if(flag)
        {
            if(check(a,x+1,y,n)&&
               check(a,x-1,y,n)&&
               check(a,x,y+1,n)&&
               check(a,x,y-1,n)&&
               check(a,x+1,y+1,n)&&
               check(a,x+1,y-1,n)&&
               check(a,x-1,y+1,n)&&
               check(a,x-1,y-1,n))
            {
                cout<<"YES"<<"\n";
                continue;
            }
        }
        else cout<<"NO"<<"\n";
        }
    return 0;
}
