#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b+c>=2)
	    cout<<"Not now"<<endl;
	    else
	    cout<<"Water filling time"<<endl;
	}
	return 0;
}
