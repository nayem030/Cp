#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<"CASE# "<<i<<":"<<endl;
        while(q--)
        {
            int x;
            cin>>x;
            auto it=lower_bound(a.begin(),a.end(),x);
            int idx=it-a.begin();
            if(a[idx]==x)
            {

                cout<<x<<" found at "<<idx+1<<endl;
            }
            else
            {
                cout<<x<<" not found"<<endl;
            }
        }
        i++;
    }
    return 0;
}

