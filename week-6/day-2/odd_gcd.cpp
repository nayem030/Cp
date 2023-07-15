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
        if(n&1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int i=n;
            while(i>=1)
            {
                cout<<i<<" ";
                i--;
            }
            cout<<endl;
        }
    }
    return 0;
}
