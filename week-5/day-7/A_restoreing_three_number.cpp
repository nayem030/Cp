#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>a(4);
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    int mx=*max_element(a.begin(),a.end());
    for(int i=0;i<4;i++)
    {
        if(a[i]!=mx)
        {
            cout<<mx-a[i]<<" ";
        }
    }
    return 0;
}
