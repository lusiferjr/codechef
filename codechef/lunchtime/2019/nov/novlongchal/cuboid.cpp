#include<bits/stdc++.h>
#define max 1000
using namespace std;
int a[max][max];
int main()
{
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
            a[i][j]=-1;
    }
    cout<<a[10][10];
    return 0;
}
