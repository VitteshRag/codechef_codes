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
	    int ar[n],br[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>br[i];
	    }
	    int max=0;
	    for(int i=0;i<n;i++)
	    {
	        int temp=(ar[i]*20)-(10*br[i]);
	        if(temp>max)
	        max=temp;
	    }
	    if(max<0)
	    cout<<0<<endl;
	    else
	    cout<<max<<endl;
	}
	return 0;
}
