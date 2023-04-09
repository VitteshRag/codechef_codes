#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int m=0;
	    for(int i=2;i<=k;i++)
	    {
	       int a=n%i;
	       m=max(m,a);
	    }
	    cout<<m<<endl;
	}
	return 0;
}
