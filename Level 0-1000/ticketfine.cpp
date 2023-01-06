/*On a certain train,Chef-the ticket collector,
collects a fine of Rs. XX if a passenger is travelling
 without a ticket. It is known that a passenger carries either a single ticket or no ticket.
PP passengers are travelling and they have a total of QQ tickets. Help Chef calculate the total fine collected.*/
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
	    cout<<a*(b-c)<<endl;
	}
	return 0;
}
