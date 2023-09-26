#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<m)
    {
        if(i>=n)
        {
            ans.push_back(b[j]);
            j++;
        }
        else if(j>=m)
        {
            ans.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j])
        {
            ans.push_back(b[j]);
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
