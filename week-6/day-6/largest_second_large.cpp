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
        multiset<int>a;
        for(int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            a.insert(in);

        }
        auto it1=a.end()-1;
        auto it2=it-1;
        cout<<(*it)+(*it2)<<endl;
    }
}
