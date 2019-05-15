#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> one;
    int t;
    cin>>t;
    while(t--)
    {
        int n,counter=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
                counter++;
            else
            {
                one.push_back(counter);
                counter=0;
                one.push_back(counter);
            }
        }
        if(counter!=0) one.push_back(counter);
        for(unsigned int i=0;i<one.size();i++)
        cout<<"\t"<<one[i]<<"\n";
    }
    return 0;
}
