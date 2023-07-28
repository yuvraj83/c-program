//ctrl+s use to save the file
/*LOOPS*/
/* FOR LOOP*/
/*WHILE LOOPS*/
/*DO WHILE LOOPS*/
/*WHY DO YOU PROGRAM?*/
// print 1 to 1000

// ADVANTAGE OF USING LOOPS
/*1).CODE REUSEABILITY
2).Saves time
3).TRAVERSING(hold)
*/
// basic syntax check the condition execute the loop and false exit the loop

/*DO WHILE LOOPS*/
/*DO WHILE LOOPS*/
/* do while loop at least execute once*/
#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index < num);

    return 0;
}
//While loop in c

#include<stdio.h>
int main()
{
    int i=0;
    while (i<54)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
}


//FOR LOOPS
/* 1).the for loop is used to iterate the statement or a part of the program several times.
2). it is used to traverse the data structure like tthe array and linked lists.
3).It has a little different syntax than while and do while loops
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{ 
    int i,j;
    //for(initialisation condition updation)
    //expression one is optional
    //expression 2 is conditional
    for (int i=0,j=0; i<=5,j<10; i++,j++)
    {
        printf("%d %d\n",i,j);
    }
    
    return 0;
}
/* properties of expression 2 :
// it is a conditional expression. it checks for a specific condition to be specified.if it is not ,the loop is termnated.*/
/* It can have more than one condition.however the loop willl iterate untill the last condition becomes false.other condition will treated as statements*/
//it is optional
/* expression 2 can perform the task of expression1 and expresssion3.that is,we can initialize the variable as well as update the loop variable in expression 2 itself.*/
/* we can pass zero or non-zero value in expression 2.however,in C,any non-zero value is true ,and zero is false by default*/
/*0 0
1 1
2 2
3 3
4 4
5 5
6 6
7 7
8 8
9 9*/
//PROPERTIES OF EXPRESSION3
/*1).expression3 is used to update the loop variable
2).we can update more than one variable at tthe same time
3).expression3 is optional
*/

