#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int ans=0;
    string ans2="";
    while(i<n)
    {
        char s1=s[i];
        char s2=s[i+1];
        if(s1==s2)
        {
            ans++;
            if(s1=='a')
            {
                ans2+=s1;
                ans2+='b';
            }
            else
            {
                ans2+='a';
                ans2+=s1;
            }

        }
        else
        {
            ans2+=s1;
            ans2+=s2;
        }
        i=i+2;

    }
    cout<<ans<<endl;
    cout<<ans2<<endl;
    return 0;
}

