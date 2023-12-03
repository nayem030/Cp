#include<bits/stdc++.h>
using namespace std;
bool is_palindrom(string s)
{
    if(s=="" or s.size()==0)
    {
        return true;
    }
    int n=s.size();
    string str=s.substr(1,n-2);
    return is_palindrom(str) && (s[0]==s.back());
}
int main()
{
    string s;
    cin>>s;
    if(is_palindrom(s)==true)
    {
        cout<<"PALINDROM";
    }
    else
    {
        cout<<"NOT PALINDROM";
    }
}
