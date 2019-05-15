/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int bs(vector<int > &arr, int l, int r, int x)
{
    int m;
    arr.push_back(2001);
    while (l <= r) {
        m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return m;
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
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       ll ans=0;
        int n;
        ll k;
        cin>>n>>k;
        int a[n+1];

        for(int i=1;i<n+1;i++)
            cin>>a[i];


        for(int i=1;i<n+1;i++)
       {

         vector<int> dm;
          int temp[2001]={0};
          for(int j=i;j<n+1;j++)
          {
              ll temp1=0;
              temp[a[j]]++;
              int d;
              d=bs(dm,0,dm.size(),a[j]);
              dm.insert(dm.begin()+d,a[j]);
            dm.pop_back();
              ll m=calm(j,i,k);
              if((k%m)==0)
                    temp1=k/m;
                else
                    temp1=(k/m)+1;
              if(temp[temp[dm[--temp1]]])
                ans++;
          }

       }
       cout<<ans<<"\n";
    }
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int > a;
    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
     for(int i=0;i<5;i++)
        cout<<a[i];
     cout<<a.begin();
}
