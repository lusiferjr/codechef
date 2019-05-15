/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int t;
    cin>>t;
    while(t--)
    {

    }

    for(unsigned int i=0;i<a.size();i++)
        cout<<"1"<<" "<<a[i]<<" ";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long> x;
    vector <long long> y;
    int t;
    cin>>t;
    while(t--)
    {
            long long a[25];
            int n;
            cin>>n;
            a[0]=0;
            a[1]=1;
            for(int i=2;i<n+1;i++)
            {
                a[i]=a[i-1] + 2*a[i-2];
            }
            x.push_back(a[n]);
            long long p=1;
            for(int i=0;i<n;i++)
                p*=2;
            y.push_back(p);
    }
    for(unsigned int i=0;i<y.size();i++)
        cout<<x[i]<<" "<<y[i]<<" ";
    return 0;

}*/
