#include<bits/stdc++.h>
using namespace std;
int chefing()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n;
        char temp[300];
        string a,b;
        cin>>a;
        k=a.length();
        for(int i=0;i<k;i++)
            temp[i]=a[i];
        for(int i=0;i<n-1;i++)
          {p=0;
              cin>>b;
              for(int i=0;i<k;i++)
              {
                  for(unsigned int j=0;j<b.length();j++)
                  {
                    if(temp[i]==b[j])
                     {
                         temp[p]=b[j];
                         p++;
                         break;
                     }
                  }
              }
             k=p;
          }
          int tem=0;
        for(int i=0;i<k;i++)
        {int j;
            for(j=0;j<i;j++)
            {
                if(temp[i]==temp[j])
                    break;
            }
            if(i==j)
               tem++;
        }
        cout<<tem<<"\n";
    }return 0;
}
