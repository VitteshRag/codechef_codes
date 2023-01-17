/*Chef was driving on a highway at a speed of X km/hour.
To avoid accidents, there are fine imposed on overspeeding as follows:
No fine if the speed of the car ≤70km/hour.
Rs 500 fine if 70 and ≤100. 
Rs2000 fine if >100 Determine the fine Chef needs to pay.*/
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
	    if(n<=70)
	    cout<<0<<endl;
	    else if(n>70 && n<=100)
	    cout<<500<<endl;
	    else
	    cout<<2000<<endl;
	}
	return 0;
}
