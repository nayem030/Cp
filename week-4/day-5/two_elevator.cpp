#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long d=1;
       long long s1=a-d;
       long long  s2=abs(b-c)+c-d;
        if(s1==s2)cout<<3<<endl;
        if(s1<s2)cout<<1<<endl;
        if(s1>s2)cout<<2<<endl;

    }
    return 0;
}
