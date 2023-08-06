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
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        string st= "Timur";
        sort(st.begin(),st.end());
        if(s==st)
        {
           cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;

        }
    }
    return 0;
}

