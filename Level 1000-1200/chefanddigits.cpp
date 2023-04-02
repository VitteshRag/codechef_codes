#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int c1=0,c2=0;
	    cin>>s;
	    int n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        c1++;
	        else
	        c2++;
	    }
	    if(c1==1 || c2==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
