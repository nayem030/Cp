#include<bits/stdc++.h>
using namespace std;
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
        int alice=0,bob=0;
        char ser='A';
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {

                if(ser=='A')
                {
                     alice++;
                }
                ser=s[i];

            }
            else
            {
                if(ser=='B')
                {
                    bob++;
                }
                ser=s[i];
            }
        }
        cout<<alice<<" "<<bob<<endl;
    }
    return 0;
}
