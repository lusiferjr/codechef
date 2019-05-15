#include<bits/stdc++.h>
using namespace std;
int depchef()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,k=0;
        cin>>n;
        int a[n+1],d[n+1];
        a[0]=-1;d[0]=-1;
        for(int i=1;i<n+1;i++)
            cin>>a[i];
        for(int i=1;i<n+1;i++)
            cin>>d[i];
        for(int i=2;i<n;i++)
        {
            temp=d[i]-(a[i-1]+a[i+1]);
            if(temp>0 && d[k]<d[i])
                k=i;
        }
        temp=d[1]-(a[n]+a[2]);
         if(temp>0 && d[k]<d[1])
                k=1;
        temp=d[n]-(a[n-1]+a[1]);
         if(temp>0 && d[k]<d[n])
                k=n;
            cout<<d[k]<<"\n";
    }
}
