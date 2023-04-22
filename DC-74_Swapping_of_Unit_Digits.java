/*Question:
    The program must accept N integers as the input. The program 
    must swap the unit digit of the first intger and unit digit of 
    N th integer. The program must swap the unit digit of the second 
    integer and the unit digit of (N-1)th integer and so on. Finally, 
    the program must print the modified N integers as the output.
    
  Sample Input & Output:
    Input:
        4
        98 50 15 19
    Output:
        99 55 10 18
*/
import java.util.*;
public class Swapping_of_Unit_Digits
{   public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int a[]=new int[N];
		for(int i=0;i<N;i++)
		    a[i]=sc.nextInt();
		for(int i=0;i<N;i++)
		    System.out.print((a[i]/10)*10+a[N-i-1]%10+" ");
	}
}
