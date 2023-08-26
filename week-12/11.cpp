#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        list<int>l;
        l.push_front(y);
        int i=1;
        bool f=true;
        while(true)
        {
            if(y-i<x)
            {
                cout<<-1<<endl;
                f=false;
                break;
            }
            else
            {
                if(l.size()==n-1)
                {
                    break;
                }
                else
                {
                    l.push_front(y-i);
                    y-=i;
                    i++;
                }
            }
        }
        if(f)
        {
            l.push_front(x);
            for(auto it:l)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
