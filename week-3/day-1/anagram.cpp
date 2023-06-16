#include<bits/stdc++.h>
using namespace  std;
int main()
{
    string s;
    int k;
    cin>>s>>k;
    int i=0,j=0,ans=-1,uni=0;
    int frq[26]={0};
    while(j<s.size())
    {
        char c=s[j];
        if(frq[c-'a']==0)
        {
            uni++;
        }
        if(uni>k)
        {
            while(uni>k)
            {
                char leftc=s[i];
                frq[leftc-'a']--;
                if(frq[leftc-'a']==0)
                {
                    uni--;
                }
                i++;
            }
        }
        if(uni==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;

    }
    cout<<ans;
}
