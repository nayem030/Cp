#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int  t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            continue;
        }
        if(n%2==0)
        {
            if(k%2==0)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<k; i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else if(k*2<=n)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<k; i++)cout<<2<<" ";
                cout<<n-(k-1)*2<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            if(k%2==1)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<k; i++)cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}

