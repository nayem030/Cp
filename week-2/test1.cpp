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
	    int om[n];
	    int add[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>om[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>add[i];
	    }
	    int cnt_o=0;
	    int cnt_a=0;
	    int ans_a=0;
	    int ans_o=0;
	    for(int i=0;i<n;i++)
	    {
	        if(om[i]==0)
	        {
	            if(cnt_o>ans_o)
                {
                    ans_o=cnt_o;
                }
	            cnt_o=0;
	        }
	        else
	        {
	            cnt_o++;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(add[i]==0)
	        {
	            if(cnt_a>ans_a)
                {
                    ans_a=cnt_a;
                }
	            cnt_a=0;
	        }
	        else
	        {
	            cnt_a++;
	        }
	    }
	    if(ans_o>ans_a)
	    {
	        cout<<"Om"<<endl;
	    }
	    else if(ans_o<ans_a)
	    {
	        cout<<"Addy"<<endl;
	    }
	    else
	    {
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}

