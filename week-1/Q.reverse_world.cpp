#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int f=0;
    while(cin>>s)
    {
        reverse(s.begin(),s.end());
        if(f)
        {
            cout<<" ";
        }
        f=1;
        cout<<s;
    }

    return 0;
}
