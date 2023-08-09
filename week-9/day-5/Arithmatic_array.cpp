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
        int sum=0;
        for(int i=0;i<n;i++)
        {
           int x;
           cin>>x;
           sum+=x;

        }
        if(sum<0)
        {
            cout<<1<<endl;
        }
        else
        {
            if(sum-n<0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<sum-n<<endl;
            }

        }
    }
    return 0;
}

