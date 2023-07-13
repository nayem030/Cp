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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[i]=x;
            mp[x]++;
        }
        int ans=INT_MAX;
        bool ok=false;
        for(auto it:mp)
        {
            if(it.second==1)
            {
                ok=true;
                ans=min(ans,it.first);
            }
        }
        int index=-1;
        if(ok)
        {
           for(int i=0;i<n;i++)
           {
               if(a[i]==ans)
               {
                   index=i+1;
                   break;
               }
           }
           cout<<index<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}
