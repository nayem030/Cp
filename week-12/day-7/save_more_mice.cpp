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
        int n,k;
        cin>>n>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        int i=0;
        int pos=0;
        for(i=0;i<k;i++)
        {
            if(pos<a[i])
            {
                pos+=(n-a[i]);
            }
            else
            {
                break;
            }
        }
        cout<<i<<endl;

    }
    return 0;
}
