/*Question:
	The program must accept an integer as N as the input.The program must 
	print the desired pattern as shown in the Example input/output section.
  Sample Input & Output:
  	Input:
	  	10
	Output:
	  	1 3 5 7 9
	  	2
	  	4
	  	6
	  	8
*/	  	
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
			cout<<i<<" ";	
	}
	cout<<endl;
	for(int i=1;i<n;i++)
	{
		if(i%2==0)
			cout<<i<<endl;		
	}
}
