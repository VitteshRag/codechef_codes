/*Impressed by the power of this number,
 Karan has begun to look for occurrences of four anywhere.
 He has a list of T integers, for each of them
 he wants to calculate the number of occurrences
 of the digit 4 in the decimal representation.
 He is too busy now, so please help him.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
        cin>>n;
        while(n)
        {
            if(n%10==4)
            c++;
            n/=10;
        }
        cout<<c<<endl;
	}
	return 0;
}
