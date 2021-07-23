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
        int h, w;
        cin >> h >> w;
        int **arr = new int *[h];
        for (int i = 0; i < h; i++)
        {
            arr[i] = new int[w];
            for (int j = 0; j < w; j++)
            {
                arr[i][j] = 0;
            }
        }
        
            for (int i = 0; i < w; i += 2)
            {
                arr[0][i] = 1;
            }
            for (int i = 2; i < h; i += 2)
            {
                arr[i][w - 1] = 1;
            }
            for (int i = 2; i < h; i += 2)
            {
                arr[i][0] = 1;
            }

            if (arr[h - 2][0] == 1 || arr[h - 1][0] == 1)
            {
                for (int i = 2; i < w; i += 2)
                {
                    arr[h-1][i] = 1;
                }
            }else{
                for (int i = 0; i < w; i += 2)
                {
                    arr[h-1][i] = 1;
                }
            }
            if(arr[h-2][w-1]==1||arr[h-1][w-1]==1){
                arr[h-1][w-2]=0;
            }
            if(arr[h-2][w-1]==1&&arr[h-1][w-1]==1){
                arr[h-1][w-1]=0;
            }
        
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << arr[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}