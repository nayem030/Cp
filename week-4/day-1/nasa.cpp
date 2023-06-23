#include<bits/stdc++.h>
using namespace std;
vector<long long>palindrom;
void generatPalindrom()
{
    long long mx=1<<15;
    for(int t=0;t<=mx;t++)
    {
        string s=to_string(t);
        string st=s;
        reverse(s.begin(),s.end());
        if(s==st)
        {
            palindrom.push_back(t);
        }
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    generatPalindrom();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>ar(n);
        unordered_map<long long ,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrom.size();j++)
            {
                if(mp.find(ar[i]^palindrom[j])!=mp.end())
                {

                    ans+=mp[ar[i]^palindrom[j]];
                }
            }
        }
        cout<<ans-n<<endl;

    }

}
