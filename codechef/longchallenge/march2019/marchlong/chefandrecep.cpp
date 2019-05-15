/*#include<bits/stdc++.h>
using namespace std;
int main9()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int temp[31]={0};
        long long int n;
        cin>>n;
        for(long long int i=0;i<n;i++)
        {
            int b[5]={0};
            string a;
            cin>>a;
            for(unsigned int j=0;j<a.length();j++)
            {
                if(a[j]=='a' && b[0]==0)
                    b[0]=1;
               else if(a[j]=='e' && b[1]==0)
                    b[1]=1;
                 else if(a[j]=='i' && b[2]==0)
                    b[2]=1;
                else if(a[j]=='o' && b[3]==0)
                    b[3]=1;
                else if(a[j]=='u' && b[4]==0)
                    b[4]=1;
            }
            //for a,e,i,o,u
            if(b[0]==1 && b[1]==0 && b[2]==0 && b[3]==0 && b[4]==0)//10000a
                temp[0]++;

            else if(b[0]==0 && b[1]==1 && b[2]==0 && b[3]==0 && b[4]==0)//01000e
                temp[1]++;

            else if(b[0]==0 && b[1]==0 && b[2]==1 && b[3]==0 && b[4]==0)//00100i
                temp[2]++;

            else if(b[0]==0 && b[1]==0 && b[2]==0 && b[3]==1 && b[4]==0)//00010o
                temp[3]++;

             else if(b[0]==0 && b[1]==0 && b[2]==0 && b[3]==0 && b[4]==1)//00001u
                temp[4]++;
            //for group of 2
             else if(b[0]==1 && b[1]==1 && b[2]==0 && b[3]==0 && b[4]==0)//11000
                temp[5]++;
             else if(b[0]==1 && b[1]==0 && b[2]==1 && b[3]==0 && b[4]==0)//10100
                temp[6]++;
             else  if(b[0]==1 && b[1]==0 && b[2]==0 && b[3]==1 && b[4]==0)//10010
                temp[7]++;
            else if(b[0]==1 && b[1]==0 && b[2]==0 && b[3]==0 && b[4]==1)//10001
                temp[8]++;
             else   if(b[0]==0 && b[1]==1 && b[2]==1 && b[3]==0 && b[4]==0)//01100
                temp[9]++;
              else   if(b[0]==0 && b[1]==1 && b[2]==0 && b[3]==1 && b[4]==0)//01010
                temp[10]++;
             else if(b[0]==0 && b[1]==1 && b[2]==0 && b[3]==0 && b[4]==1)//01001
                temp[11]++;
             else if(b[0]==0 && b[1]==0 && b[2]==1 && b[3]==1 && b[4]==0)//00110
                temp[12]++;
            else if(b[0]==0 && b[1]==0 && b[2]==1 && b[3]==0 && b[4]==1)//00101
                temp[13]++;
            else if(b[0]==0 && b[1]==0 && b[2]==0 && b[3]==1 && b[4]==1)//00011
                temp[14]++;
            //for group of 3
          else if(b[0]==1 && b[1]==1 && b[2]==1 && b[3]==0 && b[4]==0)//11100
                temp[15]++;
            else if(b[0]==1 && b[1]==1 && b[2]==0 && b[3]==1 && b[4]==0)//11010
                temp[16]++;
            else if(b[0]==1 && b[1]==1 && b[2]==0 && b[3]==0 && b[4]==1)//11001
                temp[17]++;
            else if(b[0]==1 && b[1]==0 && b[2]==1 && b[3]==1 && b[4]==0)//10110
                temp[18]++;
            else if(b[0]==1 && b[1]==0 && b[2]==1 && b[3]==0 && b[4]==1)//10101
                temp[19]++;
                else if(b[0]==1 && b[1]==0 && b[2]==0 && b[3]==1 && b[4]==1)//10011
                temp[20]++;
            else if(b[0]==0 && b[1]==1 && b[2]==1 && b[3]==1 && b[4]==0)//01110
                temp[21]++;
            else if(b[0]==0 && b[1]==1 && b[2]==1 && b[3]==0 && b[4]==1)//01101
                temp[22]++;
                else if(b[0]==0 && b[1]==1 && b[2]==0 && b[3]==1 && b[4]==1)//01011
                temp[23]++;
            else if(b[0]==0 && b[1]==0 && b[2]==1 && b[3]==1 && b[4]==1)//00111
                temp[24]++;
           //for group of 4
           else if(b[0]==1 && b[1]==1 && b[2]==1 && b[3]==1 && b[4]==0)//11110
                temp[25]++;
            else if(b[0]==1 && b[1]==1 && b[2]==1 && b[3]==0 && b[4]==1)//11101
                temp[26]++;
                else if(b[0]==1 && b[1]==1 && b[2]==0 && b[3]==1 && b[4]==1)//11011
                temp[27]++;
            else if(b[0]==1 && b[1]==0 && b[2]==1 && b[3]==1 && b[4]==1)//10111
                temp[28]++;
            else if(b[0]==0 && b[1]==1 && b[2]==1 && b[3]==1 && b[4]==1)//01111
                temp[29]++;
            //for group of 5
            else if(b[0]==1 && b[1]==1 && b[2]==1 && b[3]==1 && b[4]==1)//11111
                temp[30]++;
            }
               long long int ans=0;
                if(temp[0]>0)
                    ans=ans+temp[0]*(temp[29]);
                if(temp[1]>0)
                    ans=ans+temp[1]*(temp[28]);
                if(temp[2]>0)
                    ans=ans+temp[2]*(temp[27]);
                if(temp[3]>0)
                    ans=ans+temp[3]*(temp[26]);
                if(temp[4]>0)
                    ans=ans+temp[4]*(temp[25]);

                if(temp[5]>0)
                    ans=ans+temp[5]*(temp[24]+temp[28]+temp[29]);
                if(temp[6]>0)
                    ans=ans+temp[6]*(temp[23]+temp[27]+temp[29]);
                if(temp[7]>0)
                    ans=ans+temp[7]*(temp[22]+temp[26]+temp[29]);
                if(temp[8]>0)
                    ans=ans+temp[8]*(temp[21]+temp[25]+temp[29]);
                if(temp[9]>0)
                    ans=ans+temp[9]*(temp[20]+temp[27]+temp[28]);
                if(temp[10]>0)
                    ans=ans+temp[10]*(temp[19]+temp[26]+temp[28]);
                if(temp[11]>0)
                    ans=ans+temp[11]*(temp[18]+temp[25]+temp[28]);
                if(temp[12]>0)
                    ans=ans+temp[12]*(temp[17]+temp[26]+temp[27]);
                if(temp[13]>0)
                    ans=ans+temp[13]*(temp[16]+temp[25]+temp[27]);
                if(temp[14]>0)
                    ans=ans+temp[14]*(temp[15]+temp[25]+temp[26]);
                if(temp[15]>0)
                    ans=ans+temp[15]*(temp[20]+temp[23]+temp[24]+temp[27]+temp[28]+temp[29]);
                 if(temp[16]>0)
                    ans=ans+temp[16]*(temp[19]+temp[22]+temp[24]+temp[26]+temp[28]+temp[29]);
                 if(temp[17]>0)
                    ans=ans+temp[17]*(temp[18]+temp[21]+temp[24]+temp[25]+temp[28]+temp[29]);
                 if(temp[18]>0)
                    ans=ans+temp[18]*(temp[22]+temp[23]+temp[26]+temp[27]+temp[29]);
                 if(temp[19]>0)
                    ans=ans+temp[19]*(temp[21]+temp[23]+temp[25]+temp[27]+temp[29]);
                 if(temp[20]>0)
                    ans=ans+temp[20]*(temp[21]+temp[22]+temp[25]+temp[26]+temp[29]);
                 if(temp[21]>0)
                    ans=ans+temp[21]*(temp[26]+temp[27]+temp[28]);
                 if(temp[22]>0)
                    ans=ans+temp[22]*(temp[25]+temp[27]+temp[28]);
                 if(temp[23]>0)
                    ans=ans+temp[23]*(temp[25]+temp[26]+temp[28]);
                 if(temp[24]>0)
                    ans=ans+temp[24]*(temp[25]+temp[26]+temp[27]);
                if(temp[25]>0)
                    ans=ans+temp[25]*(temp[26]+temp[27]+temp[28]+temp[29]);
                if(temp[26]>0)
                    ans=ans+temp[26]*(temp[27]+temp[28]+temp[29]);
                if(temp[27]>0)
                    ans=ans+temp[27]*(temp[28]+temp[29]);
                if(temp[28]>0)
                    ans=ans+temp[28]*(temp[29]);
          if(temp[30]>0)
          {
              ans += temp[30]*(n-1);
          }
          if(n==1 && temp[30]==1)
            ans++;
          cout<<ans<<"\n";
        }
    return 0;
}*/
