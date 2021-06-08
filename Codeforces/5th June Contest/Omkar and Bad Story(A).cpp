#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool isNegative=false;
        for(int i=0;i<n;i++){
            int no;
            cin>>no;
            if(no<0)isNegative=true;
        }
        if(isNegative){
            cout<<"no"<<'\n';
        }
        else{
            cout<<"Yes"<<'\n';
            cout<<300<<'\n';
            for(int i=0;i<300;i++){
                cout<<i<<" ";
            }
            cout<<'\n';
        }
    }
}