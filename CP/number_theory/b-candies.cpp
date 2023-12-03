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
        vector<int>ans;
        while(n!=1)
        {
            if(n%2==0)
            {
                ans.clear();
                break;
            }
            if(((n-1)/2)%2==1)
            {
                ans.push_back(2);
                n=(n-1)/2;
            }
            else
            {
                ans.push_back(1);
                n=(n+1)/2;
            }
        }
        if(ans.empty() || ans.size()>40)
        {
            cout<<-1<<endl;
        }
        else
        {
            reverse(ans.begin(),ans.end());
            cout<<ans.size()<<endl;
            for(auto it:ans)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}
