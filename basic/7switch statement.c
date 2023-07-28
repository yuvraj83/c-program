/*SWITCH STATEMENT//*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("the age is 3");
        break;
    case 13:
        printf("the age is 13");
        break;
    case 23:
        printf("the age is 23");
        break;

    default:
        printf("age is not 3,13 or 23");
        break;
    }

    return 0;
}
/*RULES FOR SWITCH STATEMENT
1). switch expression must be int or character.
2).case value must be an integer or a character.
3).case must come inside switch.
4).break is use to when our code is correct then code stop and break not run defaultcode
*/
// if we not use break all printf statement will execute after correct statement

/* NESTED SWITCH STATEMENT*/
//SWITCH CASE STATEMENT IS USED WHEN WE HAVE MULTIPLE OPTION AND WE NEED TO DIFFERENT TASK FOR EACH OPTION.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int age, marks;
    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Enter your marks:\n");
    scanf("%d", &marks);
    switch (age)
    {
    case 3:
        printf("the age is 3");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;

        default:
            printf("your marks are not 45");
            break;
        }
        return 0;
    }
}