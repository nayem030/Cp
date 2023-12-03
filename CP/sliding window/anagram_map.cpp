#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text,ptr;
    cin>>text>>ptr;
    int k=ptr.size();
    map<char,int>mp1;
    map<char,int>mp2;
    int i=0,j=0;
    int ans=0;
    for(int i=0;i<k;i++)
    {
        mp1[ptr[i]]++;
    }
    while(j<text.size())
    {
        mp2[text[j]]++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
            if(mp1==mp2)
            {
                ans++;
            }
            mp2[text[i]]--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

