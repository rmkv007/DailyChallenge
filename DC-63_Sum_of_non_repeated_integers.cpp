/*Question:
	The program must accept N integers as the input.The program must print
	sum of non repeated integers as the output.If there is no non repeated integer
	then the program print -1 as the output.
  Sample Input & Output:
  	Input:
  		5
  		1 2 3 2 5
  	Output:
	  	9
*/
#include<iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int s=0,c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
				c++;
		}
		if(c==1)
			s+=a[i];
		c=0;	
	}	
	if(s==0)
		cout<<"-1";
	else
		cout<<s;
}
