/*Question:
	The program must accept two integers X and Y as the input.The program
	must concatenate both the integers and check whether the formed integer
	is a perfect square or not.If the integer is a perfect square then the 
	program must print Yes,Else the program print No as the output.
  Sample Input & Output:
  	Input:
	  	1
		21
	Output:
	  	Yes
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string a,b,c,d;
	cin>>a>>b;
	c.append(a);
	c.append(b);
	d.append(b);
	d.append(a);
	int n=0,n1=0;
	for(int i=0;i<c.length();i++)
	{
		n*=10;
		n+=int(c[i])-48;
		n1*=10;
		n1+=int(d[i]-48);
	}
	if(sqrt(n)*sqrt(n)==n || sqrt(n1)*sqrt(n1)==n1)
		cout<<"Yes";
	else
		cout<<"No";	
}
