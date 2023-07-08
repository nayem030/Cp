#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    set<char>st;
	    int ans=0;
	    int i=0;

	    while(s[i]!=':')
	    {
	        i++;
	    }
	    i++;

	    while(i<n)
	    {
	        cout<<"N";
	        if(s[i]==':')
	        {
	            if(st.size()==1)
	            {
	                if(st.find(')')!=st.end())
	                {
	                    ans++;
	                }
	            }
	            st.clear();
	        }
	        else
	        {
	            st.insert(s[i]);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

