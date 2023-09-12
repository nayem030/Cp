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
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>one;
        vector<int>zero;
        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]=i;
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]==0)
            {
                zero.push_back(a[i]);
            }
            else
            {
                one.push_back(a[i]);
            }
        }
        sort(one.begin(),one.end(),greater<int>());
        sort(zero.begin(),zero.end(),greater<int>());
        vector<int>b=a;
        sort(a.begin(),a.end(),greater<int>());
        int i=0;
        for(i=0;i<one.size();i++)
        {
            b[mp[one[i]]]=a[i];
        }
        for(int j=0;j<zero.size();j++)
        {
            b[mp[zero[j]]]=a[i];
            i++;
        }
        for(auto it:b)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
