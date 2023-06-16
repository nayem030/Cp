#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int n,k;
        cin>>n>>k;
        if(k>=30)
        {
            cout<<n+1<<endl;
        }
        else
        {
             long long  int c=pow(2,k);
             cout<<min(n+1,c)<<endl;
        }

    }
    return 0;
}
