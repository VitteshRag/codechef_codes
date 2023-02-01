/*The ZCO Scholarship Contest has just finished,
and you finish with a rank of R. You know that
Rank 1 to Rank 50 will get 100% scholarship on
the ZCO exam fee and Rank 51 to Rank 100 will get
50% percentage scholarship on the ZCO exam fee.
The rest do not get any scholarship.
What percentage of scholarship will you get ?*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n>=1 && n<=50)
	cout<<"100"<<endl;
	else if(n>50 && n<=100)
	cout<<"50"<<endl;
	else
	cout<<"0"<<endl;
	return 0;
}
