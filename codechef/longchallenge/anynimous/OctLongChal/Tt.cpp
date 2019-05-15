#include <bits/stdc++.h>
using namespace std;

int tt()
{
    vector <string> a;
    double t;

    cin>>t;
    for(double i=0;i<t;i++)
        {
           double k,p1,p2;
            cin>>p1>>p2>>k;
        double temp= p1+p2;
        temp=temp/k;
        if(fmod(floor(temp),2)==0)
            a.push_back("CHEF");
        else
            a.push_back("COOK");
    }
    for(double i=0;i<a.size();i++)
        cout<<a[i]<<"\n";
    return 0;
}

