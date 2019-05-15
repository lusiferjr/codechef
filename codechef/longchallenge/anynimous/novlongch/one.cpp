#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
         int n,q,k;
        cin>>n>>q>>k;
        int a[n+1];
        a[n]=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
            string b;
            cin>>b;
            for(int i=0;i<q;i++)
            {
                if(b[i]=='!')
                {
                    int temp=a[n-1];
                    for(int t=n-1;t>0;t--)
                        a[t]=a[t-1];
                    a[0]=temp;
                }
                else
                {
                    int counter=0,ans=0;
                    for(int t=0;t<n+1;t++)
                    {
                        if(a[t]==1)
                            {
                                counter++;

                            }
                        else
                        {
                            if(counter > ans && counter <= k)
                            ans=counter;
                            counter=0;
                        }
                    }
                         cout<<ans<<"\n";
                }

            }
    return 0;
}
