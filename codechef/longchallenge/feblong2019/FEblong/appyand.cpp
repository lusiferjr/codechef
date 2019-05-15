#include<bits/stdc++.h>
using namespace std;
int appyand()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,k,temp;
      long long int a,b,i=1;
        cin>>n>>a>>b>>k;
        temp=(n/a)+(n/b);
        if(b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(a%b==0)
        {
            temp=temp-2*(n/a);
        }
        else{
            while((a*b*i)<=n)
                i++;
            }
        i=i-1;
        temp=temp-(2*i);
        if(temp>=k)
            cout<<"Win\n";
        else
            cout<<"Lose\n";
    }
    return 0;
}
