/*Chef has his lunch only between 11 pm and 44 pm (both inclusive).

Given that the current time is X pm, find out whether it is lunchtime for Chef.*/
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
	    if(n>=1&&n<=4)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
