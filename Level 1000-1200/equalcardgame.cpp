#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int k,n=52,r=0;
	    cin>>k;
	    while(n)
	    {
	        if(n%k==0)
	        {
	            cout<<r<<endl;
	            break;
	        }
	        else
	        {
	            n--;
	            r++;
	        }
	    }
	}
	return 0;
}
