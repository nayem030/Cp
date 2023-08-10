#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int i=n-1;
        int pos=n;
        while(i>=0)
        {
           if(s[i]-'0'>=5)
           {
               int next=i-1;
               while(next>=0 && s[next]=='9')
               {
                   next--;
               }
               if(next==-1)
               {
                   s='1'+s;
                   pos=1;
                   break;
               }
               else
               {
                   i=next;
                   pos=next+1;
                   int v=(int)(s[i]-'0');
                   v++;
                   s[i]=(char)(v+'0');
               }
           }
           else
           {
               i--;
           }
        }
        for(int i=pos;i<s.size();i++)
        {
            s[i]='0';
        }
        cout<<s<<endl;
    }
    return 0;
}

