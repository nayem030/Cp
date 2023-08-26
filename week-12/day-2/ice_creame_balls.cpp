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
        ll n;
        cin>>n;
        ll mid,high=2e9,low=1;
        ll midc;
        while(high-low>1)
        {
            mid=low+(high-low)/2;
            midc=(mid*(mid-1))/2;
            if(midc<=n)
            {
                low=mid;
            }
            else
            {
                high=mid;
            }
        }
        ll lowc=(low*(low-1))/2;
        ll ball=n-lowc;
        cout<<ball+low<<endl;
    }
    return 0;
}
