/* Pattern : 
   #
  ##
 ###
####
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter the Height : ");
    }
    while (n < 1);
    for (int i = 1; i<(n+1);i++)
    {
        for (int j=0;j<(n-i);j++)
        {
            printf(" ");
        }
        for (int j=0; j<i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
