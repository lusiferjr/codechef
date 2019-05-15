#include<bits/stdc++.h>
#define fr for(int i=0;i<5;i++)
using namespace std;
main()
{
    vector<int >a;
    fr
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    vector<int> :: iterator i;
    for( i=a.begin();i!=a.end();i++)
        cout<<*i;



}
