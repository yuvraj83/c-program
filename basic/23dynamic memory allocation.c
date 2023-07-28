//DYNAMIC MEMORY ALLOCATION
// What &why dynamic memory allocation
// a statically allocated variable or array has afixed size in memory
//we have learnt to create big enough arraya to fit in our input but this doesnot seems like optimal way to allocate memory
// memory is very useful resource
// clearly we need a way to request memory on runtime
//dynamic memory allocation is a way  in which the size of  a data structure can be chaanged during the runtime
// shortSTATIC MEMORY ALLOCATION
// Allocation is done before the program execution
// ther is no memory reusability and the memory allocated cannot be freed 
// less efficiennt
//DYNAMIC MEMORY ALLOCATION
// allocation is done during the progarm  cexecution
//ther is memory reuseability and the allocated memory can be freed when not required
//more efficient
//MEMORY ALLOCATION IN C PROGRAM
//Memory assigned a program in a typical architecture can be broken down into four segment.
/*1.code
2.static/global veriable-->data segment(initialized data segment),bss segment(uninitialized data segment)
3.stack
4.heap(dynamic memory allocation)
*/
//C PROGRAM:MEMORY LAYOUT
/*#include<stdio.h>
int b =34;//global variable
int ret(){
    return 43*3;
}
int func1(int b1){
    static int myvar = 45;
    printf("the value of myvar is %d\n",myvar);
    myvar++return b1+myvar;
}
int main()
{
    int b =344;
    int val = func(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    return 0;
}*/


//STACK OVERFLOW
//lifo last in first out
//Compiler allocate some space for the stack part of the memory 
//when the space gets exahausted for some bad reason,the situation is called stack overflow
//typical example include recursion with wrong /nobase condition

/*
USE OF HEAP
//there are a lot of limitation of stack (ststic memory allocztion )
//some of the examples includes variable size array freeing memory no longer required etc.
//heap can be used flexibly by the programmer as per his needs
*/

/*
1.we can create a pointer in our main function and point to a memory block in the heap 
2.the address is stored by the local variable in the main function.
3.the memory consumed will not get freed automatically in case we overwrite pointer
*/

#include<stdio.h>
#include<string.h>

int main()
{
    
    return 0;
}
//output
/*size tut45.exe
   text    data     bss     dec     hex   filename
  14344    1532     112   15988    3e74    tut45.exe
*/