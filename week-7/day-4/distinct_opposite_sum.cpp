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
        int x;
        cin>>x;
        for(int i=x/2; i>=1; i--)
        {
            cout<<i<<" ";
        }
        for(int j=x/2+1; j<=x; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
