#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n++;
    while(true)
    {
        string s=to_string(n);
        bool f=true;
        for(int i=0;i<4;i++)
        {
            char ch=s[i];
            for(int j=0;j<4;j++)
            {
                if(s[i]==s[j] && i!=j)
                {
                    f=false;
                }
            }
        }
        if(f)
        {
            cout<<n;
            return 0;
        }
        n++;
    }
}
