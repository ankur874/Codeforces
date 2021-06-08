#include<bits/stdc++.h>
using namespace std;
void solve(string inp,int n){
    //check for one
    int count[26]{0};
    for(int i=0;i<n;i++){
        count[inp[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(count[i]==0){
            cout<<(char)('a'+i);
            return;
        }
    }
    set<string>st;
    for(int i=0;i<n-1;i++){
        string temp="";
        temp+=inp[i];
        temp+=inp[i+1];
        st.insert(temp);
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string temp="";
            temp+='a'+i;
            temp+='a'+j;
            if(st.find(temp)==st.end()){
                 cout<<temp;
                 return;
            }
        }
    }
    set<string>stt;
    for(int i=0;i<n-2;i++){
        string temp="";
        temp+=inp[i];
        temp+=inp[i+1];
        temp+=inp[i+2];
        stt.insert(temp);
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string temp="a";
            temp+='a'+i;
            temp+='a'+j;
            if(stt.find(temp)==stt.end()){
                 cout<<temp;
                 return;
            }
        }
    }



}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string inp;
        cin>>inp;
        solve(inp,n);
        cout<<'\n';

    }
}