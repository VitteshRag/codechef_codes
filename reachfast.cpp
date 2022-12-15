/*Chef is standing at coordinate AA while Chefina is standing at coordinate B.
In one step, Chef can increase or decrease his coordinate by at most K.
Determine the minimum number of steps required by Chef to reach Chefina.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	int a,b,c;
	cin>>a>>b>>c;
	int x=max(a,b);
	int y=min(a,b);
	if((x-y)%c==0)
	cout<<(x-y)/c<<endl;
	else
	cout<<((x-y)/c)+1<<endl;
	}
	return 0;
}
