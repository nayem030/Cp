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
       long long p=10;
       long long m=1;
       while(true)
       {
           if(m>n)
           {
               m=m/p;
               break;
           }
           m=m*p;
       }
       cout<<n-m<<endl;
    }
}
