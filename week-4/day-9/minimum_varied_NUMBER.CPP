#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        list<int>l;
        int i=9;
        while(s>0)
        {
            if(s>=i)
            {
                l.push_front(i);
                s=s-i;
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
}
