#include<bits/stdc++.h>
using namespace std;
int main()
{
    string text,ptr;
    cin>>text>>ptr;
    int k=ptr.size();
    int fre[26]={0};
    int fre2[26]={0};
    int i=0,j=0;
    int ans=0;
    for(int i=0;i<k;i++)
    {
        fre[ptr[i]-'a']++;
    }
    while(j<text.size())
    {
        fre2[text[j]-'a']++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
            bool f=true;
            for(int v=0;v<26;v++)
            {
                if(fre[v]!=fre2[v])
                {
                    f=false;
                    break;
                }
            }
            if(f)
            {
                ans++;
            }
            fre2[text[i]-'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
