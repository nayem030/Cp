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
        string x;
        cin>>x;
        string s=x;
        string ans;
        if(s[0]!='9')
        {
            for(int i=0;i<s.size();i++)
            {
              int a=s[i]-'0';
              int b=9-a;
              string s1=to_string(b);
              ans+=s1;
            }
        }
        else
        {
            int c=0;
            for(int i=n-1;i>=0;i--)
            {
                int a=(int)(s[i]-'0');

                a+=c;
                if(a>1)
                {
                    int b=11-a;
                    c=1;
                    string s1=to_string(b);
                    ans+=s1;
                }
                else
                {
                    c=0;
                    int b=1-a;
                    string s1=to_string(b);
                    ans+=s1;
                }
            }
            reverse(ans.begin(),ans.end());

        }
         cout<<ans<<endl;


    }
    return 0;
}
