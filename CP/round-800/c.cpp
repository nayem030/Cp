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
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        while(a.size()>0 and a[a.size()-1]==0)
        {
            a.pop_back();
        }
        int ans=0;
        int sum=0;
        for(int i=a.size()-1;i>0;i--)
        {
            sum+=a[i];
            if(sum>=0)
            {
                ans=1;
                break;
            }
        }
        sum+=a[0];
        if(sum!=0)
        {
            ans=1;
        }
        if(ans)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
