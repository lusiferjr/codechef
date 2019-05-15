/*#include<bits/stdc++.h>
using namespace std;
int mainy()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
       int d,small=9;
       int temp=0;
        vector<int>a;
        cin>>n>>d;
        while(n>0)
        {
            temp++;
            int g;
            g=n%10;
            if(g<small)
                small=g;
            a.push_back(g);
            n/=10;
        }
          reverse(a.begin(),a.end());
          temp=0;
              for(unsigned int i=0;i<a.size();i++)
              {
                 if(a[i]==small)
                 {
                   temp=i;
                   break;
                 }
                 }
              while(temp--)
              {
                  a.erase(a.begin());
                  a.push_back(d);
              }
              for(unsigned int i=0;i<a.size();i++)
              {
                  if(a[i]>d)
                   {
                    a.erase(a.begin()+i);
                    a.push_back(d);
                    i=0;
                   }
             }
             for(unsigned int i=0;i<a.size()-1;i++)
             {
                 if(a[i]>a[i+1])
                 {
                     a.erase(a.begin()+i);
                     a.push_back(d);
                     i=0;
                 }
             }
             if(a[a.size()-1]<a[a.size()-2])
             {
                 a.erase(a.begin()+a.size()-1);
                 a.push_back(d);
             }
             for(unsigned int i=0;i<a.size();i++)
                cout<<a[i];
             cout<<"\n";
    }
    return 0;
}*/
