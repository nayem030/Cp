#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        int j=1;
        int i=0;
        while(j<s.size())
        {
            if(s[i]==s[j])
            {
                ans.push_back(s[i]);
                i=j+1;
                j=i+1;
                continue;
            }
            j++;
        }
        cout<<ans<<endl;
    }


}
