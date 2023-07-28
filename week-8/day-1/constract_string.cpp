#include<bits/stdc++.h>
using namespace std;
void print(int cnt, char ch)
{
    if(cnt<=2)
    {
        while(cnt--)
        {
            cout<<ch;
        }
    }
    else
    {
        while(cnt>2)
        {
            cnt=(cnt/3)+cnt%3;
        }
        while(cnt--)
        {
            cout<<ch;
        }
    }
}
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
            int j=i;
            while(j<=n-1)
            {
                if(s[i]==s[j])
                {
                    cnt++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            print(cnt,s[i]);
            i=j-1;
            cnt=0;
        }
        cout<<'\n';
    }
    return 0;
}

