#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s>>k;
    int ans=-1;
    int n=s.size();
    int i=0,j=0;
    int frq[26]={0};
    int uniq=0;
    while(j<n)
    {
        char c=s[j];
        if(frq[c-'a']==0)
        {
            uniq++;
        }
        frq[c-'a']++;
        if(uniq>k)
        {
            while(uniq>k)
            {
                char leftC=s[i];
                frq[leftC-'a']--;
                if(frq[leftC-'a']==0)
                {
                    uniq--;
                }
                i++;
            }
        }
        if(uniq==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans<<endl;
    return 0;
}
