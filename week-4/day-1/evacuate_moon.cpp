#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long>car(n);
        vector<long long>ph(m);
        for(long long i=0;i<n;i++)
        {
            cin>>car[i];
        }
        for(long long i=0;i<m;i++)
        {
            cin>>ph[i];
        }
        sort(car.begin(),car.end(),greater<long long>());
        sort(ph.begin(),ph.end(),greater<long long>());
        long long ans=0;
        for(long long i=0,j=0;i<n && j<m ;i++,j++)
        {
            if((ph[j]*h)>car[i])
            {
                ans+=car[i];
            }
            else
            {
                ans+=(ph[j]*h);
            }
        }
        cout<<ans<<endl;

    }
}
