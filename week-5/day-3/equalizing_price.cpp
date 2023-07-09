#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            sum+=x;
        }
        if(sum%n==0)
        {
            cout<<sum/n<<endl;
        }
        else
        {
            cout<<(sum/n)+1<<endl;
        }
    }
    return 0;
}
