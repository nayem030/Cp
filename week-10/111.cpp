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
        string s;
        cin>>s;
        list<char>ans;
        if(s.size()==2)
        {
            if(s[0]=='(' and s[1]==')')
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        cout<<"YES"<<endl;
        int n=s.size();
        if(n%1)
        {
            for(int i=0; i<n; i++)
            {
                cout<<"()";
            }
            cout<<endl;
        }
        else
        {
            bool ok=true;
            int i=0,j=n-1;
            while(i<j)
            {
                if(s[i]!='(' || s[j]!=')')
                {
                    ok=false;
                    break;
                }
                i++;
                j--;
            }
            if(ok)
            {
                for(int i=0; i<n; i++)
                {
                    cout<<"()";
                }
                cout<<endl;
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    ans.push_front('(');
                    ans.push_back(')');
                }
                for(auto it:ans)
                {
                    cout<<it;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

