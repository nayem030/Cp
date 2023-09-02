#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<char>odd,even;
        if(k%2==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                odd.push_back(s[i]);
            }
            else
            {
                even.push_back(s[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int ec=0,oc=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<odd[oc];
                oc++;
            }
            else
            {
                cout<<even[ec];
                ec++;
            }
        }
        cout<<endl;
    }
    return 0;
}
