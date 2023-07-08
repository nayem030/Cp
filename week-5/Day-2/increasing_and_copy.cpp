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
        int n;
        cin>>n;
        int a=sqrt(n);
        int b=n-a;
        if(b%a==0)
        {
            b=b/a;
        }
        else
        {
            b=(b/a)+1;
        }
        cout<<b+(a-1)<<endl;
    }
    return 0;
}
