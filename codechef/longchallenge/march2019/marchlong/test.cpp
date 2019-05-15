/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ans;
int bs(vector<int >arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return 1;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return 0;
}
ll calm(int r,int l,ll k)
{
    ll temp;
    int i=r-l+1;
    temp=k%i;
    if(temp==0)
        return k/i;
    else
        return k/i+1;
}
void beaut(int l,int r,int a[],ll k)
{
    vector< pair<int,int> >p;

    vector <int> b;

    for(int i=l;i<=r;i++)
        b.push_back(a[i]);

    sort(b.begin(),b.end());


    b.push_back(-1);

    ll temp=1;

    for(unsigned int i=0;i<b.size()-1;i++)
    {
        if(b[i]==b[i+1])
            temp++;
        else
        {
            p.push_back(make_pair(b[i],temp));
            temp=1;
        }
    }
    ll m=calm(r,l,k);

    for(unsigned int i=0;i<p.size();i++)
        p[i].second=p[i].second*m;
    temp=0;

    unsigned int i;

     for(i=0;i<p.size();i++)
     {
         temp=temp+p[i].second;
         if(temp>=k)
            break;
     }
     temp=p[i].second/m;
     if(bs(b,0,b.size()-1,temp))
        ans=ans+1;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ans=0;
        int n;
        ll k;
        cin>>n>>k;
        int a[n+1];

        for(int i=1;i<n+1;i++)
            cin>>a[i];

        for(int i=1;i<n+1;i++)
       {

          for(int j=1;j<=i;j++)
          beaut(j,i,a,k);
       }
       cout<<ans<<"\n";
    }
    return 0;
}*/

