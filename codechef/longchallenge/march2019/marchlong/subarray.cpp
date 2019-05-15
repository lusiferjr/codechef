/*#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int l, int r, int x)
{
    int m;
    while (l <= r) {
        m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return m;
}
/*ll calm(int r,int l,ll k)
{
    ll temp;
    int i=r-l+1;
    temp=k%i;
    if(temp==0)
        return k/i;
    else
        return k/i+1;
}
void beaut(int l,int r,int a[],ll k)
{
    sort(a+l,a+r);
    ll temp;
    ll m=calm(r,l,k);

    if((k%m)==0)
        temp=l+k/m;
    else
        temp=l+(k/m)+1;

      int temp1=1;

      for(int i=temp+1;i<r && a[temp]==a[i];i++)
            temp1++;

      for(int i=temp-1;i>l && a[temp]==a[i];i--)
            temp1++;

      temp=temp1*m;

   if(a[l]>=temp && a[r]<=temp)
   {
       if(bs(a,l,r,temp))
        ans++;
   }
}
int main5()
{
    int t;
    cin>>t;

    while(t--)
    {
        ans=0;
        int n;
        ll k;
        cin>>n>>k;
        int a[n+1];

        for(int i=1;i<n+1;i++)
            cin>>a[i];

        for(int i=1;i<n+1;i++)
       {

          for(int j=1;j<=i;j++)
          beaut(j,i,a,k);
       }
       cout<<ans<<"\n";
    }
    return 0;
}
int main()
{
    int temp[6]={0};
    for(int i=1;i<6;i++)
        cin>>temp[i];
    int t=bs(temp,1,5,9);
    cout<<"index"<<t;
}*/

/*int main()
{
    vector<int >a;
    for(int i=0;i<5;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        a.push_back(2001);
    a.insert(a.begin()+5,9);
    for(int i=0;i<a.size();i++)
        cout<<a[i];

}*/
/*int bs(vector<int > arr, int l, int r, int x)
{
    int m;
    arr.push_back(2001);
    while (l <= r) {
        m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return m;
}
int main()
{
    vector<int > a;
    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int d=bs(a,0,a.size(),9);
    a.insert(a.begin()+d,9);
    for(int i=0;i<a.size();i++)
        cout<<a[i];
}
*/
/*ll calm(ll l,ll r,ll k)
{
    ll temp;
    ll i=r-l+1;
    temp=k%i;
    if(temp==0)
        return k/i;
    else
        return (k/i)+1;
}
int main()
{
    ll i,r,k;
    cin>>i>>r>>k
             ll m=calm(i,r,k);
              if((k%m)==0)
                    temp1=k/m;
                else
                    temp1=(k/m)+1;
                cout<<temp1;
}*/
