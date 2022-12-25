/*Take two strings as input A and B,
check whether the characters of  string A can be
interchanged to make string B.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c1=0,c2=0;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]=='1')
	        c1++;
	        if(b[i]=='1')
	        c2++;
	    }
	    if(c1==c2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
