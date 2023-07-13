#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int>a(m);
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    int mx_diff=0;
	    int ans=n;
	    for(int i=0;i<m;i++)
	    {
	        int diff=n-a[i];
	        if(diff>mx_diff)
	        {
	            ans=ans-(diff+1);
	            mx_diff=diff;
	        }
	    }
	    cout<<ans<<endl;

	}
	return 0;
}


