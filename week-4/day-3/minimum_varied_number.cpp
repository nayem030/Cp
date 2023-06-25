#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        list<int>l;
        int i=9;
        while(n>0)
        {
            if(i<=n)
            {
                l.push_front(i);
                n=n-i;
                i--;
            }
            else
            {
                i--;
            }

        }
        for(auto it:l)
        {
            cout<<it;
        }
        cout<<endl;

    }
}
