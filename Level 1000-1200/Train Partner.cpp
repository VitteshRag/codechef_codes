#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int r=n%8;
	    if(r==7)
	    cout<<n+1<<"SU"<<endl;
	    else if(r == 0)
	    cout<<n-1<<"SL"<<endl;
	    else if(r==8)
	    cout<<n-1<<"SL"<<endl;
	    else if(r==1)
	    cout<<n+3<<"LB"<<endl;
	    else if(r==2)
	    cout<<n+3<<"MB"<<endl;
	    else if(r==3)
	    cout<<n+3<<"UB"<<endl;
	    else if(r==4)
	    cout<<n-3<<"LB"<<endl;
	    else if(r==5)
	    cout<<n-3<<"MB"<<endl;
	    else if(r==6)
	    cout<<n-3<<"UB"<<endl;
	    	}
	return 0;
}
