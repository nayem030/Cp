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
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                cnt++;
            }
            else if(s[i]==')' && cnt)
            {
                cnt--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
