#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    float f= pow((0.143*a),a);
	    cout<<round(f)<<endl;
	}
	return 0;
}
