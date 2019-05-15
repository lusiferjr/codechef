#include<bits/stdc++.h>
using namespace std;
int mainr()
{
    int t;
    cin>>t;
    while(t--)
    {
       long int n,temp=0;
        cin>>n;
        for(long int i=0;i<n;i++)
            {
               long int a;
                cin>>a;
                temp+=a-1;
            }
            temp++;
        cout<<temp<<"\n";
    }
    return 0;
}
