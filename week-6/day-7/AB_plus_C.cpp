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
        long long x;
        cin>>x;
        if(x==1)
        {
            cout<<-1<<endl;

        }
        else if(x<=1e6)
        {
            cout<<x-1<<" "<<1<<" "<<1<<endl;
        }
        else
        {
            if(x%1000000 != 0)
            {


                cout<<1000000<<' '<<x/1000000<<' '<<x%1000000<<endl;
            }
            else
            {
                cout<<1000000<<' '<<x/1000000-1<<' '<<1000000<<endl;
            }
        }
    }
    return 0;
}
