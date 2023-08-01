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
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]=x;
            mp[x]++;
        }
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]>=3)
            {
                f=true;
                cout<<a[i]<<endl;
                break;
            }
        }
        if(!f)
        {
            cout<<-1<<endl;
        }

    }
    return 0;
}

