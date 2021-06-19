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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int minAbsI=INT_FAST8_MAX;
        int minAbs=INT_MAX;
        for(int i=0;i<n-1;i++){
             if(abs(arr[i]-arr[i+1])<minAbs){
                 minAbsI=i;
                 minAbs=abs(arr[i]-arr[i+1]);
             }
        }
        int* newArr=new int[n];
        newArr[0]=arr[minAbsI];
        newArr[n-1]=arr[minAbsI+1];
        for(int i=minAbsI+2;i<n;i++){
            
        }

        cout<<'\n';
        return 0;
    }
}