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
        long long  m;
        long long p=10;
        cin>>m;
        long long i=1;
        while(true)
        {
            if(i>m)
            {
               i=i/p;
               break;
            }
            i=i*p;
        }
       cout<<m-i<<endl;
    }
}
