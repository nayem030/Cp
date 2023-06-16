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
        string s1,s2;
        cin>>s1>>s2;
        bool f=true;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='R')
            {
                if(s2[i]!='R')
                {
                    f=false;
                    break;
                }
            }
            if(s1[i]=='G' || s1[i]=='B')
            {
                if(s2[i]=='R')
                {
                    f=false;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
