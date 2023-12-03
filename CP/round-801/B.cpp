#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const mod=1e9+7;
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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n&1)
        {
            cout<<"Mike"<<endl;
            continue;
        }
        int mn=1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]<a[mn])
            {
                mn=i;
            }
        }
        if(mn&1)
        {
            cout<<"Joe"<<endl;
        }
        else
        {
            cout<<"Mike"<<endl;
        }

    }
    return 0;
}

