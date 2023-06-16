#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>ar;
    for(int i=0; i<n; i++)
    {
        int in;
        cin>>in;
        if(in!=x)
        {
            ar.push_back(in);
        }
    }
    for(auto it: ar)
    {
        cout<<it<<" ";
    }
    return 0;
}
