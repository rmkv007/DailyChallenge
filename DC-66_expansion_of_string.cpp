/*Question:
	The program must accept a string value S as the input.The program
	must print the exapnsion string as shown in the Example Input/Output section.
  Sample Input & Output:
  	Input:
	  	orange
	Output:
		egengeangerangeorange	   
*/
#include<iostream>
using namespace std;
int main()
{
	string S;
	cin>>S;
	for(int i=S.length()-1;i>=0;i--)
	{
		for(int j=i;j<S.length();j++)
			cout<<S[j];
	}
}
