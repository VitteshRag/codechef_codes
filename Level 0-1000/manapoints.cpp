/*Chef is playing a mobile game. In the game, Chef's character Chefario can perform special attacks. However, one special attack costs 
X mana points to Chefario.
If Chefario currently has 
Y mana points, determine the maximum number of special attacks he can perform.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    cout<<(int)b/a<<endl;
	}
	return 0;
}
