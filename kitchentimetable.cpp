/*There are N students living in the dormitory of Berland State University.
 Each of them sometimes wants to use the kitchen, so the head of the dormitory
  came up with a timetable for kitchen's usage in order to avoid the conflicts:

The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.
The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2.
And so on.
The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar1[n],ar2[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar1[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar2[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if(ar2[i]<=ar1[i])
	            count++;
	        }
	        else
	        {
	            if(ar2[i]<=ar1[i]-ar1[i-1])
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
