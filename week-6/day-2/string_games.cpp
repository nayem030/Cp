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
        int one_count=0;
        int zero_count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }
        }
        int p=min(one_count,zero_count);
        if(p&1)
        {
            cout<<"Zlatan"<<endl;
        }
        else
        {
            cout<<"Ramos"<<endl;
        }
    }
    return 0;
}
