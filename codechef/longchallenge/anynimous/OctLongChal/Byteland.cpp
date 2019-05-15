#include<bits/stdc++.h>
using namespace std;
long long int p(long long int x)
{
     long long int temp3=1;
        while(x!=0)
        {
            temp3*=2;
            --x;
        }
        return temp3;
}
int Byteland()
{
    long long int t;
    cin>>t;
    for(long long int  i=0;i<t;i++)
    {
        long long int n;
        cin>>n;
        if(n==0)
           cout<<"0 "<<"0 "<<"0 ";
        else
        {
        long long int temp,temp2;
        temp=n/26;
        temp2=n%26;
        if(temp2>0 && temp2<=2)
            cout<<p(temp)<<" "<<"0 "<<"0\n";
        else if(temp2>2 && temp2<=10)
            cout<<"0 "<<p(temp)<<" "<<"0\n";
        else if(temp2>10 && temp2 <26)
            cout<<"0 "<<"0 "<<p(temp)<<"\n";
            else if(temp2==0 && temp>0)
            cout<<"0 "<<"0 "<<p(temp-1)<<"\n";
            }
    }
    return 0;
}
