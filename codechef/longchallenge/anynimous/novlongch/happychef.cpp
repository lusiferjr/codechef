/*#include<bits/stdc++.h>
using namespace std;
void in(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}
int ain()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    in(t);
   while(t--)
    {
        int flag=0;
        int n;
        in(n);
        int a[n+1];
        a[0]=0;
        for(int i=1;i<n+1;i++)
            in(a[i]);
        for(int i=1;i<n+1;i++)
        {
            for(int j=i+1;j<n+1;j++)
            {
                if(a[i]!=a[j])
                {
                    if(a[i]<=n && a[j]<=n)
                    {
                        if(a[a[i]]==a[a[j]])
                        {
                            cout<<"Truly Happy"<<"\n";
                            flag=1;
                            break;
                        }
                    }
                }
            }if(flag==1)break;
        }if(flag==0)cout<<"Poor Chef"<<"\n";
    }
    return 0;
}*/
