#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if((a-100)>(a-(a*0.1)))
	    cout<<(a*0.1)<<endl;
	    else
	    cout<<100<<endl;
	}
	return 0;
}
