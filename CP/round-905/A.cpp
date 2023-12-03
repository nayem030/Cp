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
        int i=0;
        int ans=0;
        while(i<s.size())
        {
            int n=(int)(s[i]-'0');
            if(i==0)
            {
                if(n==0)
                {
                    ans+=10;
                }
                else
                {
                    ans+=(n-1+1);

                }
            }
            else
            {
                int p=(int)(s[i-1]-'0');
                if(p==0 and n==0)
                {
                    ans+=1;
                }
                else if(p==0 and n!=0)
                {
                    ans+=(abs(n-10)+1);

                }
                else if(n==0 and p!=0)
                {
                    ans+=(abs(10-p)+1);

                }
                else
                {
                    ans+=(abs(n-p)+1);

                }
            }
            i++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
