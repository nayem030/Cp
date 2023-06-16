#include<bits/stdc++.h>
using namespace std;
int main()
{
    string txt,pat;
    cin>>txt>>pat;
    int freq1[26]= {0};
    int freq2[26]= {0};
    int k=pat.size();
    for(int i=0; i<k; i++)
    {
        freq1[pat[i]-'a']++;
    }
    int l=0,r=0;
    int ans=0;
    while(r<txt.size())
    {
        freq2[txt[r]-'a']++;
        if(r<k-1)
        {
            r++;
        }
        else
        {
            bool flag=true;
            for(int i=0; i<26; i++)
            {
                if(freq1[i]!=freq2[i])
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                ans++;
            }
            freq2[txt[l]-'a']--;
            l++;
            r++;
        }

    }
    cout<<ans<<"\n";

}
