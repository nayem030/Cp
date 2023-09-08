
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
        int n=s.size();
        int len=0,sorted=0,unsorted=INT_MAX;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            switch(s[i])
            {
            case '+':
                len++;
                break;
            case '-':
                len--;
                break;
            case '1':
                sorted=len;
                break;
            case '0':
                if(unsorted==INT_MAX)
                {
                    unsorted=len;
                }
                break;
            }
            if(sorted>len)
            {
                sorted=len;
            }
            if(unsorted>len)
            {
                unsorted=INT_MAX;
            }
            if((s[i]=='1' && unsorted<=len) || (s[i]=='0' && len<2) || (s[i]=='0' && len==sorted))
            {
              f=true;
              break;
            }
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
