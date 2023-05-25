#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    cin>>s;
	    int f=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        f+=b;
	        else
	        f+=a;
	    }
	    cout<<f<<endl;
	}
	return 0;
}
