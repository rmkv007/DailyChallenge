#include<iostream>
using namespace std;
int main()
{
	string s;
	int x,j=0;
	cin>>s>>x;
	int n=s.length();
	char vowel[n];
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vowel[j]=s[i];
			j++;
		}
	}
	if(x>j)
		cout<<"-1";
	else{
		for(int i=0;i<x;i++)
			cout<<vowel[i];
	}	
}
