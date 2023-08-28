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
        int sz=s.size();
        vector<char>odd,even;
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
        if(k%2==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
            continue;
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        int oddcnt=0,evencnt=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<odd[oddcnt++];
            }
            else
            {
                cout<<even[evencnt++];
            }
        }
        cout<<endl;
    }
    return 0;
}
