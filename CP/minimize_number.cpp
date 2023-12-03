#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    if(odd)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans=0;
    while(true)
    {
        ans++;
        int o=0;
        int e=0;
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]/2;
            if(a[i]&1)
            {
                o++;
            }
        }
        if(o)
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;

}
