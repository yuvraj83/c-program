/* IF-ELSE STATEMENT*/
#include <stdio.h>
int main()
{
    int age;
    /* C IF ELSE STATEMENT (CONTROL STATEMENT) */
    /*1).IF Statement
    2).IF Else statement

    3).IF ELSE-IF (N-TIMES)LADDER ELSE
    4).nested if else statement
    5).Multiple if statement is USED TO CHECK MORE THAN ONE CONDITION
    */
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as you age \n", age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else
    {
        printf("you cannot vote!");
    }

    return 0;
}
/* IF ELSE-IF ELSE STATEMENT*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as you age \n", age);
    if (age >= 18)
    {
        printf("you can vote!");
    }
    else if (age >= 10)
    {
        printf("you are between 10 to 18");
    }
    else if (age >= 3)
    {
        printf("you are between 3 to 10");
    }

    else
    {
        printf("you cannot vote!");
    }
    // else is not a must condition to write we can ignorre it .

    return 0;
}

/* HOME WORK
PRINT THE TYPE OF GIFT YOU ARE GIVING TO THEM
MATHS AND SCIENCE 45RS
MATHS = 15RS
SCIENCE = 15RS
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter your math marks\n");
    scanf("%d", &a);
    printf("Enter your science marks\n");
    scanf("%d", &b);
    // printf("you have gift %d for your good marks\n",gifts);
    if (a >= 33)
    {
        printf("you passed math! and gifted you 15rs.");
    }
    else if (b >= 43)
    {
        printf("you passed science and gifted you 15rs.!");
    }
    else if (a >= 43)
    {
        printf("you are passed science and math and gifted you 45rs.!");
    }

    else
    {
        printf("you are failed!");
    }
    // else is not a must condition to write we can ignorre it .

    return 0;
}
