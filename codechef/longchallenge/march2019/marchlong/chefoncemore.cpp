/*#include<bits/stdc++.h>
using namespace std;
long long int c[31][6];
void check(int b[])
{
    int flag=0,i;
    for(i=0;i<31;i++)
    {
        if(c[i][0]==b[0] && c[i][1]==b[1] && c[i][2]==b[2] && c[i][3]==b[3] && c[i][4]==b[4])
        {
            flag=1;
            break;
        }
    }
    if(flag)
        c[i][5]++;
    else
    {
        for(i=0;i<31;i++)
        {
            if(c[i][0]==0 && c[i][1]==0 && c[i][2]==0 && c[i][3]==0 && c[i][4]==0)
                break;
        }
        for(int j=0;j<5;j++)
            c[i][j]=b[j];
        c[i][5]++;
    }
}
int check1(int x,int y)
{
    if(x==0 && y==0)
        return 0;
    else
        return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        for(int i=0;i<31;i++)
        {
            for(int j=0;j<6;j++)
                c[i][j]=0;
        }
        cin>>n;
        for(long long int i=0;i<n;i++)
        {
            string a;
            cin>>a;
            int b[5]={0};
             for(unsigned int j=0;j<a.length();j++)
            {
                if(a[j]=='a' && b[0]==0)
                    b[0]=1;
               else if(a[j]=='e' && b[1]==0)
                    b[1]=1;
                 else if(a[j]=='i' && b[2]==0)
                    b[2]=1;
                else if(a[j]=='o' && b[3]==0)
                    b[3]=1;
                else if(a[j]=='u' && b[4]==0)
                    b[4]=1;
            }
            check(b);
        }
       long long int ans=0;
        for(int i=0;i<31;i++)
        {
            for(int j=i+1;j<31;j++)
            {
                if(check1(c[i][0],c[j][0]) && check1(c[i][1],c[j][1]) && check1(c[i][2],c[j][2]) && check1(c[i][3],c[j][3]) && check1(c[i][4],c[j][4]))
                    ans+=c[i][5]*c[j][5];
            }
        }
        for(int i=0;i<31;i++)
        {
            if(c[i][0]==1 && c[i][1]==1 && c[i][2]==1 && c[i][3]==1 && c[i][4]==1)
            {
                for(int j=0;j<c[i][5];j++)
                    ans+=j;
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}*/
