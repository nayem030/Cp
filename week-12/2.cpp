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
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i && a.back()>x)
            {
                a.push_back(x);
            }
            a.push_back(x);
        }
        cout<<a.size()<<endl;
        for(int x: a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
