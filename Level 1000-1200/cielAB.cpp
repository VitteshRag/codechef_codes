#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int dif=a-b;
	if(dif%10==9)
	cout<<dif-1;
	else
	cout<<dif+1;
	return 0;
}
