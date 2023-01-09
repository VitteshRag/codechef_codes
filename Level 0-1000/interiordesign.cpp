/*Chef decided to redecorate his house, and now needs
to decide between two different styles of interior design.
For the first style, tiling the floor will cost X1 rupees
and painting the walls will cost Y1 rupees.
For the second style, tiling the floor will cost X2 rupees
and painting the walls will cost Y2 rupees.
Chef will choose whichever style has the lower total cost.
How much will Chef pay for his interior design? */
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+b<c+d)
	    cout<<a+b<<endl;
	    else
	    cout<<c+d<<endl;
	}
	return 0;
}
