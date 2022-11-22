/*Question:
	The program must accept an integer N as the input.The program must print
	the factors of N in descending order as the output.
  Sample Input & Output:
  	Input:
  		24
  	Output:
	  	24 12 8 6 4 3 2 1	
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int index=num;index>=1;index--)
	{
		if(num%index==0)
			cout<<index<<" ";
	}
}
