/*Question:
	The program must accept a string S as the input.The program must break the 
	string into multiple string values so that each string contains exactly one
	vowel.The string values must be broken such that all the string values start 
	with vowel except for the string.
  Sample input & output:
  	Input:
  		helloworld
  	Output:
	  	hell
	  	ow
	  	orld
*/
#include <iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n,c=0;
    n=a.length();
    int b[n];
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            b[c]=i;
            c++;
        }
    }
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(i!=b[j])
        {
            cout<<a[i];
        }
        else{
            j++;
            i--;
            cout<<endl;
        }
    }
    return 0;
}
