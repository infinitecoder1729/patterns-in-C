/* Pattern :
    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####
*/
//Introducing Libraries
#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
    //Introducing Variables
    int n;
    do
    {
        //Taking Input
        n=get_int("Enter the Height : ");
    }
    while (n<1||n>8); //Conditions for Input
    for (int i=1;i<(n+1);i++) //Parent Loop
    {
        for (int j=0;j<(n-i);j++) //Loop for Left Hand Side Triangle
        {
            printf(" ");
        }
        for (int j=0;j<i;j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j=0;j<i;j++) //Loop for RHS Triangle
        {
            printf("#");
        }
        for (int j=0;j<(n-i);j++)
        {
            printf("");
        }
        printf("\n");

    }
}
