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
        vector<int>a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[2]<=a[0]+a[1])
        {
            cout<<(a[0]+a[1]+a[2])/2<<endl;
        }
        else
        {
            cout<<a[0]+a[1]<<endl;
        }
    }
    return 0;
}
