#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i;
    cin>>n>>k;
    deque<ll>dq;
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        dq.push_back(x);
    }
    if(k>=n)
    {
        cout<<n<<endl;
        return 0;
    }
    ll cnt=0;
    while(true)
    {
        auto p=dq.begin();
        ll x=dq.front();
        p++;
        while(p!=dq.end())
        {
            if(x>*p)
            {
                cnt++;
                p++;
            }
            else
            {
                break;
            }
        }
        if(cnt>=k)
        {
            cout<<x<<endl;
            return 0;
        }
        cnt=1;
        dq.pop_front();
        dq.push_back(x);
    }

    return 0;
}

