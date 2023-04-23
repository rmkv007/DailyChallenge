/*Question:
    The program must accept a string S as the input. The program must 
    remove the consonants from the string S. Finally the program must 
    print YES if the modified string S is a palindrome. Else the program 
    must print NO as the output. If there is no vowels in the modified string
    S then the rogram must print -1 as the output.
    Note:All the alphabets in S are only in lower case.
    
  Sample Input & Output:
    Input:
        abcuhuvmnba
    Output:
        YES
*/
#include <iostream>
using namespace std;
int main()
{
    string s,s1="",s2="";
    cin>>s;
    int n=s.length(),c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            s1+=s[i];
        if(s[n-i-1]=='a'||s[n-i-1]=='e'||s[n-i-1]=='i'||s[n-i-1]=='o'||s[n-i-1]=='u')
            s2+=s[n-i-1];
    }
    string result;
    if(s1.length()==0)
        result="-1";
    else
        result=s1==s2?"YES":"NO";
    cout<<result;
        
    return 0;
}
