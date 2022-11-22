/*Question:
	The program must get the input of three integers num1,num2 and X.Then the program
	must print the sum of integers which is the multiple of X between num1 and num2 as
	the output.
  Sample Input & Output:
  	Input:
	  	1 10 5
	Output:
		15	  	
*/
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,X,sum=0;
	cin>>num1>>num2>>X;
	for(int index=num1;index<=num2;index++)
	{
		if(index%X==0)
			sum+=index;
	}
	cout<<sum;
}
