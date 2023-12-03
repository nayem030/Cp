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
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int gcd=0;
        for(int i=0;i<n;i++)
        {
            gcd=__gcd(a[i],gcd);
        }
        cout<<a[n-1]/gcd<<endl;
    }
    return 0;
}
