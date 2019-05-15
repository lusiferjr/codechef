#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,l;
    cin>>n>>m>>k>>l;
    if(n/m<1)cout<<"-1";
    else
    {
        long long int d=((floor(n/m)*m)-k);
        if(d>=l)cout<<"1";
        else cout<<"-1";
    }
    return 0;
}
