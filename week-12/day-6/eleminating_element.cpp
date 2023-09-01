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
        vector<int>a(n);
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(s.size()!=2)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<((n-2)/2)+2<<endl;
        }
    }
    return 0;
}
