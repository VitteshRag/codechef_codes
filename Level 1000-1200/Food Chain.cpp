#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,d=1;
	    cin>>x>>y;
	    
	    while(x>=y)
	    {
	        x=x/y;
	        d++;
	    }
	    cout<<d<<endl;
	}
	return 0;
}
