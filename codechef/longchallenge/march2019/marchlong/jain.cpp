/*#include<bits/stdc++.h>
using namespace std;
int maind()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       sort(a,a+n);
       int i=0;
       while(a[i]<0)
       {
           int temp=0;
           temp+=a[i];
           i++;
       }
       int g=n-i;
       if(g==n || i==n)
        cout<<n<<" "<<n<<"\n";
       else if(g>i)
        cout<<g<<" "<<i<<"\n";
       else
        cout<<i<<" "<<g<<"\n";
    }
    return 0;
}*/
