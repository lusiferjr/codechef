/*#include<bits/stdc++.h>
#define ll long long
using namespace std;
int bs(vector<int > a,int l,int r,int x)
{
    int m=2001;
    a.push_back(m);
    while(l<=r)
    {
        m=(l+r)/2;
        if(a[m]==x)
            return m;
        if(a[m]<x)
            l=m+1;
        else
            l=m-1;
    }
    return m;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll k;
        cin>>n>>k;
        a[n];
       for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            vector<int > vec;
            int temp[2001]={0};
            for(int j=0;j<n;j++)
            {
                temp[a[j]]++;
                int index=bs(vec,0,vec.size(),a[j]);
                vec.insert(vec.begin()+index,a[j]);
                index=ceil(k/ceil(k/(j-l+1)));
            }
        }
    }
}*/
