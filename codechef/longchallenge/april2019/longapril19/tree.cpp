#include<bits/stdc++.h>
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
    int t;
    in(t)
    lo
    {
        map<int,vector <int> > neighbour;
       // map<int , vector <int > > tree;
        int n,x;
        in(n)in(x)
        int value[n+1];
        value[0]=0;
        fr(i,n,1)
          in(value[i])
        fr(i,n-1,0)
        {
            int p,q;
            in(p)in(q)
            neighbour[p].push_back(q);
            neighbour[q].push_back(p);
        }
       int parent[n+1]={0},vist[n+1]={0},bfs[n+1]={0};
       neighbour[0].push_back(1);
       int i=0;

       map<int, vector <int> >::iterator ptr;
       for(ptr=neighbour.begin();ptr!=neighbour.end();ptr++)
       {
           prn(ptr->first) prn("\t")
           for(int j=0;j<ptr->second.size();j++)
            prn(ptr->second[j])
           prn("\n")
       }

    }
}
