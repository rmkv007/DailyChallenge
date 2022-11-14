/*Question:
	The program must accept a string S and an integer X as the input.
	The proram must print the first X characters and in S as the output.
  Sample input & output:
  	input:
  		transport
  		3
  	output:
	  	traort
*/
#include<iostream>
using namespace std;
int main()
{
	string S;
	cin>>S;
	int X,i;
	cin>>X;
	int l=S.length();
	for(i=0;i<X;i++)
	{
		cout<<S[i];
	}
	for(i=l-X;i<l;i++)
	{
		cout<<S[i];
	}
}	  	
