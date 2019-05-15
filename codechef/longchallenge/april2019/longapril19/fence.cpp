/*#include<bits/stdc++.h>
#define in(x) cin>>x;
#define lo while(t--)
#define prn(x) cout<<x;
#define nl <<"\n";
#define pr cout<<
#define fr(i,n,x) for(int i=x;i<n+x;i++)
#define ll long long
using namespace std;
int main()
{
    map <int , vector <int> > tree;
    tree[1].push_back(1);
    tree[2].push_back(2);
    tree[1].push_back(2);
    tree[2].push_back(3);
    map <int , vector <int> > :: iterator ptr;
    vector <int> :: iterator ptr1;
    for(ptr=tree.begin();ptr!=tree.end();ptr++)
    {
      int x;
      x=ptr->first;
      prn(x)
        prn(ptr->second[0])
        prn(ptr->second[1])
    }
}
*/
