#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],key=-1,counter=0;
        for(int i=0;i<n;i++)
             cin>>a[i];
         sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(key!=a[i])
            {
                counter++;
                key=a[i];
            }
        }
        cout<<counter;

    }
    return 0;
}
