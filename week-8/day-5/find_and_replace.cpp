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
        string s;
        cin>>s;
        bool f=true;
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=i;
            }
            else
            {
                if((i-mp[s[i]])%2==1)
                {
                    f=false;
                    break;
                }
                mp[s[i]]=i;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

