/*Question:
	The program must accept an integer N and a digit D as the input.Then the 
	program must print the sum of the integers from 1 to N which have the unit
	digit as D as the output.If there is no such integers from 1 to N the program
	must print -1 as the output.
  Sample Input & Output:
  	Input:
	  	30 3
	Output:
		39
*/		  	
#include<stdio.h>
int main()
{
	int N,D,S=0,i;
	scanf("%d %d",&N,&D);
	for(i=1;i<N;i++)
	{
		if(i%10==D)
			S+=i;
	}
	printf("%d",S);
}

