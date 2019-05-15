/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,counter=0;
        cin>>n>>m;
        int h[n],p[n],a[m];
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
            cin>>h[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
           int key=h[n-1];
            a[p[n-1]-1]=1;

        for(int i=n-2;i>=0;i--)
        {
            if(h[i]>key)
            {
                key=h[i];
                a[p[i]-1]=1;
            }
        }
        for(int i=0;i<m;i++)
            counter+=a[i];
    cout<<counter<<"\n";
    }
    return 0;
}
*/
