#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    int**arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if(i>j)arr[i][j]=0;
             else if(i==j){
                 arr[i][j]=s[i]-'a'+1;
             }else{
                 arr[i][j]=arr[i][j-1]+s[j]-'a'+1;
             }
        }
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
       cout<<arr[l][r]<<'\n';
    }
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
    
}