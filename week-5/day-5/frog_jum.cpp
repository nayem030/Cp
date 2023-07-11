#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        vector<int>posi;
        posi.push_back(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                posi.push_back(i+1);
            }
        }
        posi.push_back(s.size()+1);
        for(int i=0;i<posi.size()-1;i++)
        {
            ans=max(ans,(posi[i+1]-posi[i]));
        }
        cout<<ans<<endl;
    }
}
