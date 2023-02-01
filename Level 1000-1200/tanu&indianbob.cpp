/*Tanu observed many people on the railways station,
and made a list of gestures that they made. Usual
"Yes" gesture is recorded as "Y", no as "N" and Indian
"Yes" gesture as "I". (Assume no foreigner uses the Indian
"Yes" gesture and vice-versa). Identify which of them were
Indians, which were not Indian, and which one you cannot be sure about.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n>>s;
	    int cy=0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='Y')
	        cy=1;
	        if(s[i]=='I')
	        flag=1;
	    }
	    if(flag==1)
	    cout<<"INDIAN"<<endl;
	    else if(cy==1&&flag!=1)
	    cout<<"NOT INDIAN"<<endl;
	    else
	    cout<<"NOT SURE"<<endl;
	    
	}
	return 0;
}
