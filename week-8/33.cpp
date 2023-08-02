#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        list<int>l;
        int i=9;
        if(x>45)
        {
            cout<<-1<<endl;
            continue;
        }
        while(i>0)
        {
            if(x>=i)
            {
                l.push_front(i);
                x-=i;
                i--;
            }
            else
            {
                i--;
            }
        }
        for(auto e:l)
        {
            cout<<e;
        }
        cout<<endl;
    }
    return 0;
}

