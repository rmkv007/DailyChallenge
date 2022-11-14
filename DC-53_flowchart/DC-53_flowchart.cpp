#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N,x;
	cin>>N;
	cin>>x;
	int current_value,sum=0,index=1;
	for(index=1;index<=N;index++)
	{
		cin>>current_value;
		sum+=(int)(pow(x,current_value));
	}
	cout<<sum/x;
}
