/*In Chefland, everyone who earns strictly more than 
Y rupees per year, has to pay a tax to Chef.
Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.
You have earned (X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<a-b<<endl;
	}
	return 0;
}
