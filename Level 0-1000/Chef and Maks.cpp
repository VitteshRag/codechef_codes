#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    x=x*100;
	    y=y*10;
	    if(x<y)
	    cout<<"Disposable"<<endl;
	    else
	    cout<<"Cloth"<<endl;
	}
	return 0;
}
