/*MoEngage helps the Chef send email reminders about rated contests to the participants.

There are a total of N participants on Chef’s platform, and 
U of them have told Chef not to send emails to them.
If so, how many participants should MoEngage send the contest emails to?*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,u;
	cin>>n>>u;
	cout<<n-u;
	return 0;
}

