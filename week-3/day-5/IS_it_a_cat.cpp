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
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());
        cout << (s == "meow" ? "YES" : "NO") << "\n";
    }
    return 0;
}
