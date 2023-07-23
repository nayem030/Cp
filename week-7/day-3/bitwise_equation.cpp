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
        long long n;
        cin>>n;
        if(n==0)
        {
            cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
        }
        else
        {
            long long a=1,b=2,c=0,d=0;
            for(long long i=3; i<=10000000; i++)
            {
                long long curr=n^i;
                if(i==curr || curr<=2)
                {
                    continue;
                }
                c=curr;
                d=i;
                break;
            }
            if(c == 0)cout<<"-1\n";
            else cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
        }
    }
}
