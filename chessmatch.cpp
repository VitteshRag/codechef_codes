/*In a Chess match "a + b", each player
  has a clock which shows aa minutes at
  the start and whenever a player makes a move,
  bb seconds are added to this player's clock.
  Time on a player's clock decreases during that
  player's turns and remains unchanged during the
  other player's turns. If the time on some
  player's clock hits zero (but not only in this case),
  this player loses the game.*/
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
	    cout<<(2*(180+a))-b-c<<endl;
	}
	return 0;
}
