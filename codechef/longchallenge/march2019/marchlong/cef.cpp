/*#include<bits/stdc++.h>
using namespace std;
int mai()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp=0;
        cin>>n;
        int p[n][5][1]={0};
        for(int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            for(unsigned int j=0;j<a.length();j++)
            {
                int g;
                g=a[j];
                if(g==97)
                    p[i][0][0]++;
                else if(g==101)
                    p[i][1][0]++;
                else if(g==105)
                    p[i][2][0]++;
                else if(g==111)
                    p[i][3][0]++;
                else if(g==117)
                    p[i][4][0]++;
            }
        }
        for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    int flag=1;
                    for(int h=0;h<5;h++)
                    {
                        if(p[i][h][0]==0 && p[j][h][0]==0)
                          {
                              flag=0;
                              break;
                          }
                    }
                    if(flag==1)
                        temp++;
                }
            }
        cout<<temp<<"\n";
    }
    return 0;
}*/

