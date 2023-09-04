#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2][n+1];
        a[0][1]=2*n;
        a[1][n]=2*n-1;
        int curr=1;
        for(int i=1;i<=n;i++)
        {
            a[i%2][i]=curr;
            curr++;
        }
        curr=2*n-2;
        for(int i=3;i<=n;i+=2)
        {
            a[0][i]=curr;
            a[1][i-1]=curr-1;
            curr-=2;
        }
        for(int i=0;i<2;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
