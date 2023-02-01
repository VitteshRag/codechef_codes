/*Chef rented a car for a day.
Usually, the cost of the car is Rs 10per km.
However, since Chef has booked the car for the whole day,
he needs to pay for at least 300300 kms even if the car runs less than 300kms.
If the car ran Xkms, determine the cost Chef needs to pay.*/
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
	    if(n>300)
	    cout<<n*10<<endl;
	    else
	    cout<<3000<<endl;
	    
	}
	return 0;
}
