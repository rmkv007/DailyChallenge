/*Question:
	The program must accept a string value S contains only alphabets as the input.The 
	program must print an alphabet from S which has occured first in the alphabetical
	order as the output.
  Sample Input & Output:
  	Input:
  		qwerty	
  	Ouput:
	  	e	
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char S[101];
	scanf("%s",S);
	int len=strlen(S);
	int num=S[0],index;
	for(index=1;index<len;index++)
	{
		if(num>S[index])
			num=S[index];
	}
	printf("%c",num);
}
