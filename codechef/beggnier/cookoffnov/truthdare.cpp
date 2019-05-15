/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,flag=1;
        cin>>a;
        int aa[a];
        for(int i=0;i<a;i++)
            cin>>aa[i];
            sort(aa,aa+a);
        cin>>b;
        int ab[b];
        for(int i=0;i<b;i++)
            cin>>ab[i];
            sort(ab,ab+b);
        cin>>c;
        int ac[c];
        for(int i=0;i<c;i++)
            cin>>ac[i];
            sort(ac,ac+c);
        cin>>d;
        int ad[d];
        for(int i=0;i<d;i++)
            cin>>ad[i];
            sort(ad,ad+d);
        for(int i=0;i<c;i++)
            if(binary_search(aa,aa+a,ac[i])==false)
                {flag=0;break;}
        if(flag)
        {
            for(int i=0;i<d;i++)
            if(binary_search(ab,ab+b,ad[i])==false)
                {flag=0;break;}
        }
        if(flag)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}*/
