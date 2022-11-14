/*Question:
	The program must get a string S as the input and reverse the words between 
	1st and last word.And then printt the modified string as the output.
  Sample Input & Output:
  	Input:
		Hi how are you!
	Output:
		Hi woh era you!		

*/
#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	int b[n],c=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			b[c]=i;
			c++;
		}
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(i<b[0])
			cout<<s[i];
		else if(i>=b[c-1])
			cout<<s[i];
		else{
			if(i==b[k]+1)
			{
				for(int j=b[k+1];j>=i;j--)
					cout<<s[j];
				k++;
			}
		}
	}
}
