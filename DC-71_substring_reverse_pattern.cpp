/*Question:
	The program must accept a string S as the input.The program must print the
	desired pattern as shown in the example input/output section.
  Sample Input & Output:
  	Input:
	  	skillrack
	Output:
		skillrack
		*carlli
		**illra
		***rll
		****l
*/			   	
#include<iostream>
using namespace std;
int main()
{
	string S;
	cin>>S;
	cout<<S<<endl;
	for(int index=0;index<S.length()/2;index++)
	{
		for(int k=0;k<=index;k++)
			cout<<"*";
		if(index%2==0)
		{
			for(int j=S.length()-index-2;j>=index+1;j--)
				cout<<S[j];
		}
		else{
			for(int j=index+1;j<S.length()-index-1;j++)
				cout<<S[j];
		}	
		cout<<endl;
	}
}
