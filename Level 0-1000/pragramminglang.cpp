/*Currently, Chef has to use a language
with two given features AA and BB. He has two options,
switching to a language with two features A1 B1,
or to a language with two features A2 and B2.
All four features of these two languages are pairwise distinct.
Tell Chef whether he can use the first language, the second language
 or neither of these languages (if no single language has all the required features).*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a==a1&&b==b1)||(a==b1&&b==a1))
	    cout<<"1"<<endl;
	    else if((a==a2&&b==b2)||(a==b2&&b==a2))
	    cout<<"2"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
