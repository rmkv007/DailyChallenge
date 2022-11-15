/*Question:
	The program must accept two characters ch1,ch2 and an integer N as the input.
	The program must print the desired pattern as shown in the Example Input/Output
	section.
  Sample Input & Output:
  	Input:
  		A C &
  	Output:
	  	A C C C C C C 
		A A C C C C C
		A A A C C C C
		A A A A C C C
		A A A A A C C
		A A A A A A C
		A A A A A A A	
*/
#include<iostream>
using namespace std;
int main()
{
	char ch1,ch2;
	int N;
	cin>>ch1>>ch2>>N;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<=i;j++)
			cout<<ch1<<" ";
		for(int k=i;k<N-1;k++)
			cout<<ch2<<" ";
		cout<<endl;	
	}
	
}
