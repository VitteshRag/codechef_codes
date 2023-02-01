/*Write a program to obtain 2 numbers (A and B) and an arithmetic operator
(C) and then design a calculator depending upon the operator entered by the user.
So for example if C="+", you have to sum the two numbers.
If C="-", you have to subtract the two numbers.
If C=" * ", you have to print the product.
If C=" / ", you have to divide the two numbers.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  double a,b;
  cin>>a>>b;
  char c;
  cin>>c;
  if(c=='+')
  cout<<a+b<<endl;
  else if(c=='-')
  cout<<a-b<<endl;
  else if(c=='*')
  cout<<fixed<<setprecision(1)<<a*b<<endl;
  else if(c=='/')
  cout<<fixed<<setprecision(8)<<a/b<<endl;
  return 0;
}