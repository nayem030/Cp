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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=a[0];
        for(int i=1; i<n; i++)
        {
            ans=ans&a[i];
            cout<<ans<<" ";
        }
        cout<<ans<<endl;

    }

    return 0;
}
