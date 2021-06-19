#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long *arr=new long[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum<n){
            cout<<"1";
        }
        else{
            cout<<sum-n;
        }
        cout<<'\n';
    }
    return 0;
}