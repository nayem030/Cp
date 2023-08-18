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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int l=0,r=n-1;
        while(a[l]==b[l])
        {
            l++;
        }
        while(a[r]==b[r])
        {
            r--;
        }
        while(l>0 and b[l]>=b[l-1])
        {
            l--;
        }
        while(r<n-1 and b[r]<=b[r+1])
        {
            r++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
    return 0;
}

