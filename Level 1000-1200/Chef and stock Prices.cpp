#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float s,a,b,c;
	     
	    cin>>s>>a>>b>>c;
	    s+=(s*(c/100.0));
	    if(s>=a && s<=b)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}
	return 0;
}
