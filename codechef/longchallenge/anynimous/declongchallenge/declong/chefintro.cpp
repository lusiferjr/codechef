#include<bits/stdc++.h>
using namespace std;
int chefintro(){
    int n,r;
    cin>>n>>r;
    while(n--){
        int temp;
        cin>>temp;
        if(temp<r)
            cout<<"Bad boi\n";
        else
            cout<<"Good boi\n";
    }
}
