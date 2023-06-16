#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int squre_a=a*a;
    int squre_b=b*b;
    int squre_c=c*c;
    if(squre_a+squre_b<squre_c)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
