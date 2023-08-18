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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int x=0;
        for(int i=0; i<n; i++)
        {
            x^=a[i];
        }
        for(int i=0; i<n; i++)
        {
            a[i]^=x;
        }
        int y=0;
        for(int i=0; i<n; i++)
        {
            y^=a[i];
        }
        if(y==0)
        {
            cout<<x<<endl;
        }
        else

        {
            cout<<-1<<endl;
        }

    }
    return 0;
}

