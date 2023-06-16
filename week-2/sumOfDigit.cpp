#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    while(s.size()!=1)
    {
        int i=0;
        int sum=0;
       while(i!=s.size()){
            char ch=s[i];
            int n=int(ch-'0');
            sum=sum+n;
            i++;

       }
       cnt++;
       s=to_string(sum);
    }
    cout<<cnt;
}
