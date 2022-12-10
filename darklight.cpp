/*Given the initial state as K and
 the number of changes made in the
 levels as N, find the final state of the torch.
 If the final state cannot be determined,
 print Ambiguous instead.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    if(k==0 && n%4==0)
	    cout<<"Off"<<endl;
	    else if(k==0 && n%4!=0)
	    cout<<"On"<<endl;
	    else if(k==1 && n%4==0)
	    cout<<"On"<<endl;
	    else
	    cout<<"Ambiguous"<<endl;
	    
	}
	return 0;
}
