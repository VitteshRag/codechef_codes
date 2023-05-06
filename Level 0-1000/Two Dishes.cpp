#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	int count=min(b,a+c);
	if(count>=n)
	cout<<"YES "<<endl;
	else
	cout<<"NO "<<endl;
	}
	return 0;
	
}