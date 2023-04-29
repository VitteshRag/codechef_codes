#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    long int ar[4]={a,b,c,d};
	    sort(ar,ar+4);
	    if(ar[0]==ar[1] && ar[2]==ar[3])
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
