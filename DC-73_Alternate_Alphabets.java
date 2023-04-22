/*Question:
    The program must accept a string S(contains only alphabets) as the input.
    The program must split the string into two equal halves. The program must
    print the alphabets in the second half interlaced with the alphabets in the 
    first half of S as the output.
    
  Sample Input & Output:
    Input:
        radeon
    Output:
        eroand
*/
import java.util.*;
public class Alternate_Alphabets
{   public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String S=sc.nextLine();
		int n=S.length();
		for(int i=0;i<n/2;i++)
		    System.out.print(S.charAt((i+n/2))+""+S.charAt(i));
	}
}
