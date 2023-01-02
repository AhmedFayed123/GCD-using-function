#include<iostream>
using namespace std;
 int gcd(int n1, int n2)
 { 
 int gcd2;
 for(int i=1;i<=n1 && i<=n2;i++)
 {
 	if(n1%i==0 && n2%i==0)
 	{
 		gcd2 = i;
	 }
 }
 return gcd2;
 }
 int main()
 {
 	int num1,num2;
 	cout<<"enter 1st number : ";
 	cin>>num1;
 	cout<<"enter 2st number : ";
 	cin>>num2;
 	cout<<"GCD = "<<gcd(num1,num2);
 	
 }
