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
        int l,r;
        cin>>l>>r;
        int ans=l;
        int mx_diff=0;
        int diff=0;
        for(int i=l;i<=r;i++)
        {
            string s=to_string(i);
            sort(s.begin(),s.end());
            int mx=(int)(s[s.size()-1]-'0');
            int mn=(int)(s[0]-'0');
            diff=mx-mn;
            if(diff>mx_diff)
            {
                mx_diff=diff;
                ans=i;
            }
            if(mx_diff==9)break;
        }
        cout<<ans<<endl;
    }
}
