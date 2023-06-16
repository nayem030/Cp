#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string sr=s;
    reverse(sr.begin(),sr.end());
    if(s==sr)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
