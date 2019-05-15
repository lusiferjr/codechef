#include<iostream>

using namespace std;
int t;
int sumdigit (int x)
{
    t++;
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}
int sum(int N, int D)
{
    t++;
    return N+D;
}

int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}
