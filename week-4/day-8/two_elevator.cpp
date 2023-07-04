#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=a-1;
        int ans2=abs(c-b)+c-1;
        if(ans1==ans2)cout<<3<<endl;
        if(ans1<ans2)cout<<1<<endl;
        if(ans1>ans2)cout<<2<<endl;
    }
    return 0;

}
