#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int*our=new int[n];
        int*llya=new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>our[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>llya[i];
        }
        sort(our, our+n, greater<int>());
        sort(llya,llya+n, greater<int>());
        int k = n - round(n/4);
        int ourS = 0;
        int llyaS = 0;
        for (int i = 0; i < k; i++)
        {
            ourS += our[i];
            llyaS+=llyaS[i];
        }
        int res = 0;
        if (ourS >= llyaS)
        {
            cout << 0;
        }
        else
        {
            while (ourS < llyaS)
            {
                ourS += 100;
                if(k<n){
                    int add=max(llya[k++],0);
                    llyaS+=add;
                }
                res++;
            }
             cout << res;
        }
       cout<<'\n';
    }

    return 0;
}