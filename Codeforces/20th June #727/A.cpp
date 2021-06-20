#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,x,k;
        cin>>n>>x>>k;
        vector<ll>arr(n);
        arr[0]=0;
        for(ll i=1;i<n;i++){
          arr[i]=arr[i-1]+x;
        }
        string c="";
        for(ll i=0;i<n-1;i++){
            int pos=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
            if(pos>=n){
                pos--;
            }
            if(arr[pos]>k){
                pos--;
            }
            string s = c;
           stringstream geek(s);
            ll x ;
            geek >> x;
            
            c=to_string(x+pos-i);
            k+=x;
        }
        cout<<c<<'\n';
    }
}