#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    while(k--)
    {
        string s=to_string(n);
        if(s[s.size()-1]=='0')
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
}

