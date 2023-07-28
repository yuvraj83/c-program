/* POINTERS
--->A pointer is a variable which stores address of another variable.
---->&symbol is used to get the address of the variable.
----->  *symbol is used to get the value of the variable that the pointer is pointing so.
----> In C,wr can create generic pointers too.
Regular C variable stores the value whereas pointer stores the address of the variable
*/

/*DYNAMIC MEMORY ALLOCATION:RECAP
--->An statically allocated variable or array has fixed size in memory.
---->Dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime.
--->Memory assigned to a program in a typical architecture can be broken down into four segments:
1.Code     2.Static/Global variables     3.Stack     4.Heap
*/

/*FUNCTION POINTER
--->we can ahve pointer pointing to function as well
---->function pointer are useful to implement callback function
---> compiler takes one or more source files ans convert them to machine code.
*/
//CODE FUNCTION POINTER
#include<stdio.h>
#include<stdlib.h>

int sum(int a ,int b){
    return a+b;
}
int main()
{
    printf("the sum of 1 and 2 is %d \n",sum(1,2));//testing the function 
    return 0;
}

//OUTPUT:the sum of 1 and 2 is 3 

#include<stdio.h>
#include<stdlib.h>

int sum(int a ,int b){
    return a+b;
}
void greet(){
    printf("Hello world my user good morning %d \n");
}
int main()
{

    printf("the sum of 1 and 2 is %d \n",sum(1,2));//testing the function 
    int(*fptr)(int,int);//declaring a function pointer 
    fptr =&sum;//creating a function pointer 
    int d = (*fptr)(4,6);  //Dereferencing a function pointer
    printf("The  value of d is %d\n",d);

    return 0;

}
/*OUTPUT:
the sum of 1 and 2 is 3 
The  value of d is 10
*/
/*USING FUNCTION POINTER IN C
//FUNCTION POINTER
--->we can have pointer pointing to function as well .
---->function pointer points to code and not data 
----->function poiters are useful to implement callback function
---->Unlike normal pointer ,we do not allocate de-allocate memory using function pointers
*/



/*CALLBACK FUNCTION
--->Funcrtion pointer are used to pass a function to a function
---->This passed function can then be called again (hence the name callback function).
--->this provide programmer to write less code to do more stuff.

*/
#include<stdio.h>
#include<stdlib.h>
int sum(int a ,int b){
    return a+b;
}
void greetHelloAndExecute(int (*fptr)(int,int)){
    printf("Hello  user   \n");
    printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
void greetGmAndExecute(int (*fptr)(int,int)){
    printf("Goood Morning user\n");
     printf("the sum of 5 and 7 is %d\n",fptr(5,7));
}
int main()
{
    int (*ptr)(int,int);
    //int *ptr(int,int);//this is wrong because theis means value return pointer to integer.
    ptr = sum;
    greetGmAndExecute(ptr);
    return 0;
}
/*OUTPUT:
Goood Morning user
the sum of 5 and 7 is 12
*/
//print a code for greetgoodafternoon and greetgoodevening find a average of two numbers

