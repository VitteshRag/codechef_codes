#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string ls,rs;
	    int n=s.size();
	    ls= s.substr(1,n)+s.substr(0,1);
	    rs= s.substr(n-1,n)+s.substr(0,n-1);
	    if(ls==rs)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
