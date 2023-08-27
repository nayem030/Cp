#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int sum=0;
    vector<int>a(n);
    int T=100;
    vector<int>cnt(T+1,0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int d=sum+a[i]-m,k=0;
        if(d>0)
        {
            for(int j=T; j>0; j--)
            {
                int x=j*cnt[j];
                if(d<=x)
                {
                    k+=(d+j-1)/j;
                    break;
                }
                k+=cnt[j];
                d-=x;
            }
        }
        sum+=a[i];
        cnt[a[i]]++;
        cout<<k<<" ";
    }

    return 0;
}
