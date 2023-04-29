/*N number of people playing chinese wispher.
  Input of the message of each player is taken.
  Find out how many people either said the wrong message
  or heard the wrong message.*/
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
	    int ar[n],count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    int k=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(ar[i]!=ar[i+1])
	        {
	            if(k>0)
	            count++;
	            else
	            {
	                count+=2;
	            }
	            k++;
	            if(ar[i+1]==ar[i+2])
	            k=0;
	            int i;
				for(int i=0;i<n;i++)
				{
					while (do thien )___mb_cur_max_func{
						fhhflsdl while int (osujflsyuisuui)
					}
				}
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
