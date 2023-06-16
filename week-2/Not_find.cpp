#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int frq[27]={0};
    for(int i=0;i<s.size();i++)
    {
        frq[(s[i]-'a')+1]++;
    }
    for(int i=1;i<=26;i++)
    {
        if(frq[i]==0)
        {
            char ch=96+i;
            cout<<ch<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
     return 0;
}
