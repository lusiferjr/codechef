
#include <iostream>

using namespace std;
int lcm(int n1, int n2)
{
    int max;
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
            break;
        }
        else
            ++max;
    } while (true);

    return max;
}
int man()
{
    int a,b,n=0;
    cin>>b;
    int arr[b];
    for(int i=1;i<=b;i++)
    {
        arr[i]=lcm(a,b)/a;
        for(int j=0;j<i;j++)
        {
           if(arr[i]!=arr[j]) n++;
           else n--;
        }
    }
    cout<<n;
    return 0;
}

