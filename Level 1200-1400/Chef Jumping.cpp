#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	int n=0,k=1;
	while(n<a)
	{
	    n+=k;
	    if(k==3)
	    k=1;
	    else
	    k++;
	}
	if(n==a)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
