/*In an ATM machine with K units of money,
find out if N number of people can deposit money or not*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int k,n;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	    if(ar[i]<=k)
	    {
	        cout<<"1";
	        k-=ar[i];
	    }
	    else
	    cout<<"0";
	}
	cout<<endl;
	}
	return 0;
}
