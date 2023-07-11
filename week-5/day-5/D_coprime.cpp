#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>cop[1111];
        for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(__gcd(i,j)==1){
                cop[i].push_back(j);
            }
        }
    }
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
        vector<int>maxindex(1111,-1);
        for(int i=1;i<=n;i++)
        {
            maxindex[a[i]]=i;
        }
        int ans=0;
        for(int i=1;i<=1000;i++)
        {
            if(maxindex[i]==-1)
            {
                continue;
            }
            if(i==1)
            {
                ans=max(ans,2*maxindex[i]);
                continue;
            }
            for(auto p:cop[i])
            {
                if(maxindex[p]!=-1)
                {
                    ans=max(ans,maxindex[p]+maxindex[i]);
                }
            }
        }
        if(ans==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}
