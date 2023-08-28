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
        vector<int>a;
        a.push_back(n);
        while (__builtin_popcount(n) > 1)
        {
            int  p = __builtin_ctz(n);
            n -= (1 << p);
            a.push_back(n);
        }
        while(n>1)
        {
            n/=2;
            a.push_back(n);
        }
        cout<<a.size()<<endl;
        for(auto it:a)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
