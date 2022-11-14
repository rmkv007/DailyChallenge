/*Question:
	The program must accept an integer N as the input.The program must
	reverse N and print it as the output.
  Sample Input & Output:
  	Input:
  		-9812
  	Output:
	  	-2189	
*/
#include<iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int s=0;
	while(n>0 || n<0)
	{
		s*=10;
		s+=n%10;
		n/=10;
	}
	cout<<s;
	return 0;
}
