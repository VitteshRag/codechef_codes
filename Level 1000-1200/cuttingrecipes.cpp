/*The chef has a recipe he wishes to use for his guests,
but the recipe will make far more food than he can serve
to the guests. The chef therefore would like to make a
reduced version of the recipe which has the same ratios
of ingredients, but makes less food. The chef, however,
does not like fractions. The original recipe contains only
whole numbers of ingredients, and the chef wants the reduced
recipe to only contain whole numbers of ingredients as well.
Help the chef determine how much of each ingredient to use in order to make as little food as possible.*/
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
	    int ar[n];
	    for(int i=0;i<n;i++)
	    {

		
	        cin>>ar[i];
	    }
	    int cp=ar[0];
	    for(int i=cp;i>0;i--)
	    {
	        int count=0;
	        for(int j=0;j<n;j++)
	        {
	            if(ar[j]%i==0)
	            count++;
	        }
	        if(count==n)
	        {
	            for(int j=0;j<n;j++)
	            {
	                cout<<ar[j]/i<<" ";
	            }
	            cout<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
