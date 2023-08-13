#include<bits/stdc++.h>
using namespace std;
const int  mod=1e9+7;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        int v[n+1][n];
        for(int i=0; i<n; i++)
        {
            v[0][i]=a[i];
        }
        for(int i=1; i<=n; i++)
        {
            map<int,int> m;
            for(int i=0; i<n; i++)
            {
                m[a[i]]++;
            }

            for(int j=0; j<n; j++)
            {
                a[j]=m[a[j]];
                v[i][j]=a[j];
            }

        }
        int q;
        cin>>q;
        while(q--)
        {
            int x,k;
            cin>>x>>k;
            x--;
            if(k<=n)
            {
                cout<<v[k][x]<<endl;
            }
            else
            {
                cout<<v[n][x]<<endl;
            }
        }

    }
}

