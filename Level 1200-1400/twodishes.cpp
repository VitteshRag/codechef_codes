#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    if(s<=n)
	    cout<<s<<endl;
	    else
	    cout<<n-(s-n)<<endl;
	}
	return 0;
}
