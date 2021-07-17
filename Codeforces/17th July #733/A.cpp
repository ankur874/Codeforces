#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);\
        char big=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]>big){
                big=s[i];
            }
        }
        cout<<big-'0'<<'\n';
    }
    return 0;
}