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
        ll n,m,d;
        cin>>n>>m>>d;
        vector<ll>a(m);
        for(int i=0;i<m;i++)
        {

            cin>>a[i];
        }
        ll sum=m;
        for(int i=0;i<m-1;i++)
        {
            ll curr=a[i];
            ll next =a[i+1];
            sum+=(next-curr-1)/d;
        }
        if(a[0]!=1)
        {
            sum+=(a[0]-1-1)/d;
            sum+=1;
        }
        sum+=(n-a[m-1])/d;
        ll ans=1e18;
        vector<ll>c(m);
        for(int i=1;i<m-1;i++)
        {
            ll temp=sum;
            ll pre=a[i-1];
            ll next=a[i+1];
            ll now=a[i];
            temp-=(now-pre-1)/d;
            temp-=(next-now-1)/d;
            temp--;
            temp+=(next-pre-1)/d;
            ans=min(ans,temp);
            c[i]=temp;
        }
        ll temp=sum;
        if(a[0]!=1)
        {
            temp-=(a[0]-1-1)/d;
            temp-=1;
        }
        temp -= (a[1]-a[0]-1)/d;
        temp += (a[1] - 2)/ d;
        ans = min(ans , temp);
        c[0] = temp;
        temp = sum;
        temp -= (n-a[m-1])/d;
        temp--;
        temp -= (a[m-1]-a[m-2]-1)/d;
        temp += (n-a[m-2])/d;
        ans = min(ans , temp);
        c[m-1] = temp;

        cout<<ans<<" ";
        ll cnt=0;
        for(int i=0;i<m;i++)
        {
            if(ans==c[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

