/*
    1
   232
  34543
 4567654
567898765
*/

#include <stdio.h>

int main(void)
{
    int rows,i,spaces,count;
    printf("Enter the Number of Rows : ");
    scanf("%i",&rows);
    for (i=1;i<=rows;i++)
    {
        spaces=rows-i;
        for (int j=1;j<=spaces;j++)
        {
            printf(" ");
        }
        count=i;
        for (int a=0;a<i;a++)
        {
            printf("%i",count);
            count++;
        }
        count--;
        for (int b=0;b<i-1;b++)
        {
            count--;
            printf("%i",count);
        }
        printf("\n");
    }
}
