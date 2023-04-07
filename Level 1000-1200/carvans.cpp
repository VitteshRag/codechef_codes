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
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    int max=ar[0],c=1;
	    for(int i=1;i<n;i++)
	    {
	        if(ar[i]<=max)
	        {
	            c++;
	            max=ar[i];
	        }
	        else
	        continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
