#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&(1<<0)){
            cout<<"Bob"<<'\n';
        }
        else{
               if(!(n&(n-1))){
                   int c=0;
                   while(n>1){
                       n/=2;
                       c++;
                   }
                   if(c&(1<<0)){
                       cout<<"Bob"<<'\n';
                   }else{
                       cout<<"Alice"<<'\n';
                   }
               }else{
                   cout<<"Alice"<<'\n';
               }
               
        }
    }
    return 0;
}