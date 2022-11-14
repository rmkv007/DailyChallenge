/*Question:
	The program accept string S and integer X.The program must print the splited of string 
	into X times and print the output like following output.
  Sample Input & Output:
  	Input:
  		Daillychallenge
  		4
  	Output:
  		Dail
  		lych
  		alle
  		nge*
*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	int x;
	cin>>s>>x;
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
		if((i+1)%x==0 && i!=0)
		{
			cout<<endl;
		}
	}
	if(n%x!=0)
	{
		while(n%x!=0)
		{
			cout<<"*";
			n++;
		}
	}
}
