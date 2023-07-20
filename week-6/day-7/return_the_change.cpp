#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%10>=5)
        {
            n+=(n%10);
        }
        else
        {
            n-=(n%10);
        }
        cout<<100-n<<endl;
    }
    return 0;
}
