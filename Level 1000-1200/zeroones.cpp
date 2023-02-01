/*Given the length of number, print a number of the given length,
that consists of the same number of '01' as '10'.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int s=0;
	    for(int i= 0; i<  N; i++)
         {
            if(i==0 || i== N - 1)
            {
             cout<< '1';
            }
             else
            {
             cout << '0';
            }
        }   
        cout << "\n";
	  }
	return 0;
}
