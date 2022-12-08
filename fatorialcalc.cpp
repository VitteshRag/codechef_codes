#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b=1;
	    cin>>a;
	    while(a)
      {
        b*=a;
        a--;
      }
    cout<<b<<endl;
	}
	return 0;
}
