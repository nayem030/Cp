#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        ml.insert(input);
    }
    auto it=ml.begin();
    int value=*it;
    int cnt;
     cnt=count(ml.begin(),ml.end(),value);
     if(cnt%2==0)
     {
         cout<<"Unlucky";
     }
     else
     {
         cout<<"Lucky";
     }
     return 0;
}
