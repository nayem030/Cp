#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
void banglaNumber(long long int X)
{
    if(X>9999999)
    {
        cout<<X/10000000<<" kuti ";
        X = X%10000000;
    }
    if(X>99999)
    {
        cout<<X/100000<<" lakh ";
        X = X%100000;
    }
    if(X>999)
    {
        cout<<X/1000<<" hajar ";
        X = X%1000;
    }
    if(X>99)
    {
       cout<<X/100<<" shata ";
        X = X%100;
    }
    if(X<100 && X>0)
    {
        cout<<X<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(n>9999999)
        {
            banglaNumber(n/10000000);
            cout<<" Kuti ";
            n%=10000000;
        }
        banglaNumber(n);
    }
    return 0;
}

