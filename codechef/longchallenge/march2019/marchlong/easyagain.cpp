/*#include<bits/stdc++.h>
using namespace std;
int maint()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,temp=0;
        long long int n;
        int a[19]={0};
        int i=0;
        while(n>0)
        {
            temp++;
            int g;
            g=n%10;
            a[i]=g;
            n/=10;
        }
        int j=18;
        for(i=0;i<9;i++)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j--;
        }
        for(i=0;i<18;i++)
            cout<<"\t"<<a[i];
    }
}
**/
