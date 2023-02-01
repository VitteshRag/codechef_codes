/*Now since chef is not that great in deciphering binary strings,
he has decided the following criteria to classify the feedback as Good or Bad :
If the string contains the substring "010" or "101", then the feedback is Good,
 else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.
*/
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int c=0;
	    cin>>s;
	    int l=s.length();
	    for(int i=0;i<l-2;i++)
	    {
	        if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0') || (s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'))
	        c=1;
	    }
	    if(c==0)
	    cout<<"Bad"<<endl;
	    else
	    cout<<"Good"<<endl;
	}
	return 0;
}
