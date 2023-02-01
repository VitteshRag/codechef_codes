/*There are 101 citizens in Chefland. It is election time in Chefland and 
3 parties,A,B,C are contesting the elections. Party A receives
XA votes, party B receives XB votes, and party C receives 
XC votes.The constitution of Chefland requires a particular
party to receive a clear majority to form the government.
A party is said to have a clear majority if it receives strictly
greater than 50 votes.*/
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










		
	    if(a>50)
	    cout<<"A"<<endl;
	    else if (b>50)
	    cout<<"B"<<endl;
	    else if (c>50)
	    cout<<"C"<<endl;
	    else
	    cout<<"NOTA"<<endl;
	}
	return 0;
}
