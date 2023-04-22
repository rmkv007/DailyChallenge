/*Question:
    The program must accept two integers num1 and num2 as the input.
    The program must print YES if the sum of unique digits in num1 and 
    the sum of unique digits in num2 are equal. Else the program must 
    print NO as the output.
    
  Sample Input & Output:
    Input:
        2452  9222
    Output:
        YES
        
    Input:
        121  3035
    Output:
        NO
*/
import java.util.*;
public class Sum_of_Unique_Digits
{   public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num1=sc.nextInt(),c1=0,f1=0,s1=0;
		int num2=sc.nextInt(),c2=0,f2=0,s2=0;
		int a[]=new int [10],b[]=new int[10];
		while(num1>0 || num2>0)
		{
		    for(int i=0;i<c1;i++)
		        if(a[i]==num1%10)
		            f1=1;
		    for(int i=0;i<c2;i++)
		        if(b[i]==num2%10)
		            f2=1;
		    if(f1==0){
		        a[c1]=num1%10;s1+=a[c1];c1++;}
		    if(f2==0){
		        b[c2]=num2%10;s2+=b[c2];c2++;}
		    f1=0;f2=0;
		    num1/=10;num2/=10;
		}
		System.out.print(s1==s2?"YES":"NO");
	}
}
