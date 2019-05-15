#include<bits/stdc++.h>
using namespace std;
long long int value(long long int x)
{
    long long int temp=1,y=0;
    for(long long int i=0;i<x;i++)
       {
           y=temp+y;
           temp=temp*2;
       }
       y=y+temp;
    return y;
}
int trick()
{

    long int t;
    cin>>t;
    while(t--)
    {
       long long int  a,p,d1=1,d2=1;
        cin>>a;
        p=a-1;
        while(1){
          long long int y,profit;
            y=value(d1-1);
            profit=(a*d1)-y;
            if(profit>0)
            {
                d1++;
                if(p<profit)
                {
                    d2=d1;
                    p=profit;
                }
            }
            else
                break;
        }
        cout<<--d1<<" "<<--d2<<"\n";
    }
    return 0;
}
