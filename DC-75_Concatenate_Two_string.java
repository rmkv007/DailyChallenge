/*Question:
    The program must accept two integers N1 and N2 and two string  values S1
    and S2 as the input. The program must print the concatenate of the first N1 
    characters in S1 and last N2 characters in S2. Then the program must print the 
    concatenate of remaining characters in S2 and S1 as the output.
    
  Sample Input & Output:
    Input:
        courier
        river
        3 2
    Output:
        couer
        rivrier
*/
import java.util.*;
public class Concatenate_Two_string
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
		String S1=sc.nextLine();
		String S2=sc.nextLine();
		int N1=sc.nextInt();
		int N2=sc.nextInt();
		System.out.println(S1.substring(0,N1)+S2.substring(S2.length()-N2,S2.length()));
		System.out.print(S2.substring(0,S2.length()-N2)+S1.substring(S1.length()-N1-1,S1.length()));
	}
}
