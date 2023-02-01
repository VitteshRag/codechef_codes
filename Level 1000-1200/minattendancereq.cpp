/*A semester in Chef's University has 120 working days.
The University's requirement is that a student should be present for at least 75%
of the working days in the semester. If not, the student is failed.
Chef has been taking a lot of holidays, and is now concerned whether he can pass the attendance requirement or not. 
N working days have already passed, and you are given N bits
0 denotes that Chef was absent, and 1 denotes that Chef was present on that day.
Can Chef hope to pass the requirement by the end of the semester?*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    string s;
	    cin>>n>>s;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='0')
	        count++;
	    }
	    int pres = 120-n;
	    pres = pres+count;
	    if(pres<90)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
