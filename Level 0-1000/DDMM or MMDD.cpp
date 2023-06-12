#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    string s1,s2,s3;
    while(t--)
    {
        string s;
        cin>>s;
        s1=s.substr(0,2);
        s2=s.substr(3,5);
        s3=s.substr(6,10);
        int n1=stoi(s1);
        int n2=stoi(s2);
        int n3=stoi(s3);
        if(n1<=12 && n2<=12)
        cout<<"BOTH"<<endl;
        else if(n1<=12)
        cout<<"MM/DD/YYYY"<<endl;
        else
        cout<<"DD/MM/YYYY"<<endl;
    }
	return 0;
}
