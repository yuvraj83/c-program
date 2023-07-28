/*WHAT IS A FUNCTION
---->A function is a set of instruction to perform a specific task.
#FUNCTION ARE USED TO DIVIDE A LARGE C PROGRAM INTO SMALLER PIECES
# A function can be CALLED MULTIPLE times to provide REUSABILITY and modularity to the c program
3. also called procedure or subroutine*/
//FUNCTION SYNTAX
/* the basic syntax of a c function is written as foolows:
return_type function_name(data_type parameter1,data_type parameter2,data_type parameter3,...)*/
//ADVANTAGE OF  C FUNCTION
/*
we can avoid rewritting same logic through function.
we can divide work among programmmers using function.
we can easily debug a program using function.
*/
//DECLARATION ,DEFINITION,AND CALL.
/* 
A function is declared to tell the compiler about its existence.
A function is define to get some task done.
A function is called in order to used.*/
//TYPES OF C FUNCTION
/* LIBARARY FUNCTION:
function included in c header files.[printf,scanf]
USER DEFINED FUNCTION:
Function created by c programmer to reduce complexity of a program.
*/
//function  code examples
//WITHOUT ARGUMENT AND WITHOUT RETURN VALUE
#include<stdio.h>
 //function declaration
void printstar();

int main()
{
    int a,b,n; //funtion call
    a=9;
    b=87;
    

    printstar(n);
    //printf("%d\n",c);
  //getch();
    
}
//FUNCTION DEFINITION
void printstar()
{
    int n=7;
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');//single quote use for character and double quote use for string.
    }
    
}
//OUTPUT:*******

//WITHOUT ARGUMENT AND WITH RETURN VALUE
#include<stdio.h>
 //function declaration
 int takenumber();
int main()
{ 
   int a,b,c;
a=4;
b=34;
//c = sum(a,b);
    //funtion call

  // here takenumber having return value so we provide one variable to store return value.
   c=takenumber();
   printf("the number is %d\n",c);  
    return 0;   
}

//FUNCTION DEFINITION

int takenumber()
 {int i;
   printf("Enter a number:");
    scanf("%d",&i);
    return i;
 }
 /*INPUT:Enter a number:9
 OUTPUT:the number is 9*/


//WITH ARGUMENT AND WITHOUT RETURN VALUE
#include<stdio.h>
 //function declaration
void printstar(int n);

void main()
{
    int a,b,c; //funtion call
    a=9;
    b=87;

    printstar(7);
    //printf("%d\n",c);
   // getch();
    
}
//FUNCTION DEFINITION
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');//single quote use for character and double quote use for string.
    }
    
}
// OUTPUT:*******

//WITH ARGUMENT AND WITH RETURN VALUE
#include<stdio.h>
int sum(int a,int b); //function declaration
int main()
{
    int a,b,c; //funtion call
    a=9;
    b=87;
    c=sum(a,b);
    printf("%d\n",c);
    return 0;
}
// argument are 9 and 87 and return value 96.
int sum(int a,int b){   //function definiton
    return a+b;
}

// difference between argument and parameter
//ARGUMENT
//values that are passed in function call.
// used to send value
//actual parameter
//PARAMETER
//values in function declaration and definition
//use to receive value
//formal parameter


// recheck function codes

//SELF MADE CODE
//NO ARGUMENT AND NO RETURN VALUE
#include<stdio.h>
void yuvraj();//function declaration
void main()
{

    yuvraj;  //calling function
    printf("welcome to my branch\n");
    yuvraj;//calling function
  //  getch();
}
void yuvraj()  //function definition
{
    int i;
    for (int i = 0; i < 10; i++)
    {
        printf("the value\n");
    }
    
} 
/*output:welcome to my branch

*/

//ARGUMENT BUT NO RETURN VALUE
#include<stdio.h>
void sum(int x,int y);
 void main()
{

   int a,b;
   printf("enter number\n");
   scanf("%d%d",&a,&b);
   sum(a,b);
    
   // getch();
}
void sum(int x,int y){
    int z;
    z = x+y;
    printf("addition is %d\n",z);
    
}
/*output:
enter numberenter number
4
5
addition is 9

*/

//ARGUMENT AND RETURN VALUE
#include<stdio.h>
int add(int x,int y);
 int main()
{

   int a,b,c;
   printf("enter number\n");
   scanf("%d%d",&a,&b);
   c = add(a,b);
   printf("sum of two number is %d\n",c);
    
    return 0;
}
int add(int x,int y){
    int z;
    z = x+y;
}
/*output:
enter numberenter number
4
5
sum of two number is 9  
*/


//NO ARGUMENT AND RETURN VALUE
#include<stdio.h>
int add();
 int main()
{

   int a,b,c;
   a=5;
   b=7;
   c = add();
   
    
    return 0;
}
int add(){
    int x,y,sum;
    printf("enter number\n");
   scanf("%d%d",&x,&y);
   sum=x+y;
   printf("sum of two number is %d\n",sum);

    return 0;
}
/*OUTPUT:
enter number
6
7
sum of two number is 13*/
//VOID ONLY PRINT THE VALUE NOT RETURN