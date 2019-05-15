#include<bits/stdc++.h>
using namespace std;
int maine()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,v,k,ans=-1;
        cin>>n>>k>>v;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            temp+=x;
        }
        v=v*(n+k);
        if((v-temp)>0)
        {
            v-=temp;
            if(v%k==0)
                ans=v/k;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
