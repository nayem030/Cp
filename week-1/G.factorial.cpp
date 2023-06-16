#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>ans;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1;
        for(int i=1;i<=n;i++)
        {
            a*=i;
        }
        ans.push_back(a);

    }
    for(int it:ans)
    {
        cout<<it<<'\n';
    }
    return 0;

}
