#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
       string s[8];
       vector<char>ans;
       for(int i=0;i<8;i++)
       {
           cin>>s[i];
       }
       for(int i=0;i<8;i++)
       {
           for(int j=0;j<8;j++)
           {
               if(s[i][j]!='.')
               {
                   ans.push_back(s[i][j]);
               }
           }
       }
       for(auto it:ans)
       {
           cout<<it;
       }
       cout<<endl;

   }

   return 0;
}
