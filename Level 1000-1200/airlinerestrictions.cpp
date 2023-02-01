/*Chef has 3 bags that she wants to take on a flight. They weigh 
A, B, and C kgs respectively. She wants to check-in exactly
two of these bags and carry the remaining one bag with her.
The airline restrictions says that the total sum of the weight
of the bags that are checked-in cannot exceed D kgs and the
weight of the bag which is carried cannot exceed E kgs.


Find if Chef can take all the three bags on the flight.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if(((a+b)<=d) && (c<=e))
	    cout<<"YES"<<endl;
	    else if(((c+b)<=d )&& (a<=e))
	    cout<<"YES"<<endl;
	    else if(((a+c))<=d && (b<=e))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
