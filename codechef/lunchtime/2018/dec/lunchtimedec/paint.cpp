#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n][n];
        int k,l=0;
        for(int i=0;i<n;i++)
        {
            k=1;
            for(int j=0;j<n-i;j++)
            {
               // b[i][j]=k;
                b[i][j]=((k*(k-1))/2)+l+1;
                k++;
            }
            l+=2;
        }
        k=0;
        for(int j=n-1;j>0;--j)
        {

            for(int i=n-1;i>k;--i)
            {
                b[i][j]=-1;
            // b[i][j]=n*n-k(k-1)/2+k+1;
            }k++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<b[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
}
