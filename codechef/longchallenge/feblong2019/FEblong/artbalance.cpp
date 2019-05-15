#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char b;
        int a[26][1]={0};
        string s;
        cin>>s;
        for(unsigned int i=0;i<s.length();i++)
        {
            int temp;
            b=s[i];
            temp=b;
            a[temp-65][0]++;
        }
        int coun=0;
        for(int i=0;i<26;i++)
        {
            if(a[i][0]>0)
                coun++;
        }
        vector <int> fac;
        unsigned int temp=1;
    while (temp <=s.length())
    {
        if (not(s.length() % temp))
           fac.push_back(temp);

        temp++;
    }
    vector <int> ans;

    }

}
