/*Question:
    The program must accept an integer N as the input. The program must print 
    the first N terms in the series as the output.
    Note: The order of series must be 1/4,1/2,3/4,1,5/4,3/2 and so on.
    
  Sample Input & Output:
    Input:
        6
    Output:
        1/4 1/2 3/4 1 5/4 3/2
*/
#include <stdio.h>
int main()
{
    int N,i=1;
    scanf("%d",&N);
    while(i<=N)
    {
        if(i==2)
            printf("1/2 ");
        if(i%2==0 && i%4!=0)
            printf("%d/2 ",i/2);
        if(i%4==0)
            printf("%d ",i/4);
        if(i%2!=0)
            printf("%d/4 ",i);
        i++;
    }
    return 0;
}
