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
        int n;
        cin>>n;
        int nb=(n*(n-1))/2;
        vector<int>b(nb);
        int mx=INT_MIN;
        for(int i=0;i<nb;i++)
        {
           cin>>b[i];
           mx=max(mx,b[i]);
        }
        vector<int>a;
        for(int i=0;i<n-1;i++)
        {
            a.push_back(b[i]);
        }
        a.push_back(mx);
        for(auto e:a)
        {
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}

