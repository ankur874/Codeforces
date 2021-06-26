#include<bits/stdc++.h>
using namespace std;
string makeOk(string s,int k){
    string ans="";
    int n=s.length();
    for(int i=0;i<k;i++){
        ans+=(char)s[i%n];
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<string>substrings;
    for(int i=0;i<n;i++){
        substrings.push_back(s.substr(0,i+1));
    }
    for(int i=0;i<substrings.size();i++){
        string s=makeOk(substrings[i],k);
        substrings[i]=s;
    }
    sort(substrings.begin(),substrings.end());
    cout<<substrings[0]<<'\n';
    return 0;
}