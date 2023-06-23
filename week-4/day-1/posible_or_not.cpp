#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,b;
        cin>>n>>b;
        vector<long long>v;
        while(n--)
        {
            long long a;
            cin>>a;
            long long v1=a&b;
            if(v1==b)
            {
                v.push_back(a);
            }
        }
        if(v.size()==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long ans=v[0];
        for(long long i=1;i<v.size();i++)
        {
            ans=ans&v[i];
        }
        if(ans==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
