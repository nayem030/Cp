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
        long long n,k;
        cin>>n>>k;
        long long odd=(n/2)+n%2;
        long long extra_odd=odd-k;
        if(n<2*k)
        {
            cout<<"NO"<<endl;
        }
        else if(n==2*k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(extra_odd%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
