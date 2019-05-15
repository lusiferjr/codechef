
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=false;
        string a;
        cin>>a;
        int s=a.size()/2;
        char a1[s],a2[s];
        if(s%2==0)
        {
            if( a1[0]!=a1[s-1] && a1[s-1]!=a2[0] && a[0]!=a[s-1])
            {
                for(int i=0;i<s-1;i++)
                {
                    if(a1[i]!=a1[i+1] || a2[i]!=a2[i+2])
                        flag=true;
                }
            }
            else if()
        }
        if(flag)
            cout<<"yes\n";
        else
            cout<<"fuckoff\n";
    }
    return 0;
}
