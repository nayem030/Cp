#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n-1;i++)
    {
        int in;
        cin>>in;
        s.insert(in);
    }
    auto it=s.begin();
    int i=1;
    while(i<=n)
    {
        int value=*it;
        if(value!=i)
        {
            cout<<i;
            return 0;
        }
        it++;
        i++;
    }
    return 0;
}
