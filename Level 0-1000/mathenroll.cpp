/*For the upcoming semester, the admins of
 your university decided to keep a total of X
 seats for the MATH-1 course.
 A student interest survey was conducted by
 the admins and it was found that YY 
 students were interested in taking up the MATH-1 course.*/
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
	    if(a<b)
	    cout<<b-a<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
