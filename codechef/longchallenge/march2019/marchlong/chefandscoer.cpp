/*#include<bits/stdc++.h>
#define in cin>>
#define pr cout<<
#define fr(i,n) for(int i=0;i<n;i++)
#define nl <<"\n";
#define lo while(t--)
using namespace std;
main()
{
    int t;
    in t;
    lo
    {
        int n;
        in n;
        int a[n];
        fr(i,n) in a[i];
        int ans=0;
        int j=0;
        fr(i,n)
        {
            if(a[i]==1)
            {
                ans++;
            }

            if(a[i]==2 && i+2>n-1)
                ans++;

            if(a[i]==2 && i+2<=n-1)
                ans=ans+3;

        }
        pr ans nl;
    }

}*/
