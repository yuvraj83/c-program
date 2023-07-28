//LOCAL VARIABLE
//WHAT IS SCOPE?
/* Scope is a region of program where adefined variable can exist and beyond which it cant be accesssed.
variable which are accessed inside a function or a block are called LOCAL VARIABLE'
they can only be accessed by the function they are declared in!
they are innaccessible to the function outside the function they are declared in!
*/

//GLOBAL VARIBLE
/* these are the variable defined outside the main method.
global variable are accesseible throughout the entire program from any function.
if a local and global variable have the same name,the local variable will take preference.
*/
//FORMAL ARGUMENTS
/* These variable are treated as local variable with in a function
these variable take precedence over global variable.
*/
//STATIC VARIABLE
/*
static variable are variable which have a property of preserving there value even when go out of scope
they preserve their value even when they go out of scope.
they preserve their value from the previous scope and are not initialized again.
static variable remains in memory throughtout the span of the program
static variable are initializd to 0 if not initilaised explicity
in C,static variable can only be initialized using constant variable*/

#include<stdio.h>
int main()
{ 
    printf("the value of funct 1 is%d ",func1());
    
    return 0;
}
int func1(){
    return 34;
}

//output: output :the value of funct 1 is3440 
//here both b aredifferent not same. we can change it FORMAL PARAMETER
#include<stdio.h>
int func1(int b);
int func1(int b){
    printf("the address of b inside func1 is %d \n",&b);
    return b*10;
}
int main()
{ 
    int b =344;
    printf("the address of b inside main is %d \n",&b);
    int val = func1(b);
    int *ptr =&val;
    printf("the value of funct 1 is%d ",val);
    return 0;

}
// output :the address of b inside main is 6422296 
// the address of b inside func1 is 6422272 
// the value of funct 1 is3440
//LOCAL VARIABLE
//WHAT IS SCOPE?
/* Scope is a region of program where adefined variable can exist and beyond which it cant be accesdsed.
variable which are accessed inside a function or a block are called LOCAL VARIABLE'
they can only be accessed by the function they are declared in!
they are innaccessible to the function outside the function they are declared in!
*/

//GLOBAL VARIBLE
/* these are the variable defined outside the main method.
global variable are accesseible throughout the entire program from any function.
if a local and global variable have the same name,the local variable will take preference.
*/
//FORMAL ARGUMENTS
/* These variable are treated as local variable with in a function
these variable take precedence over global variable.
*/
//STATIC VARIABLE
/*
static variable are variable which have a property of preserving there value even when go out of scope
they preserve their value even when they go out of scope.
they preserve their value from the previous scope and are not initialized again.
static variable remains in memory throughtout the span of the program
static variable are initializd to 0 if not initilaised explicity
in C,static variable can only be initialized using constant variable*/

#include<stdio.h>
int func1(int b);
int b =34;//this is a globalvariable since it is declared inside main
#include<stdio.h>
int b = 34;
int func1(int b){
    printf("the value of b inside func1 is %d \n",&b);
    return b*10;
}
int main()
{ 
    int b =344;
    //printf("the address of b inside main is %d \n",&b);
    int val = func1(b);
    int *ptr =&val;
    printf("the value of funct 1 is%d ",val);
    return 0;

}
// output :the value of b inside func1 is 6422272 
// the value of funct 1 is3440 
#include<stdio.h>
int b = 34;
int func1(int b1){
    printf("the value of b inside func1 is %d \n",b);
    return b1*10;
}
int main()
{ 
    int b =344;
    //printf("the address of b inside main is %d \n",&b);
    int val = func1(b);
    int *ptr =&val;
    printf("the value of funct 1 is%d ",val);
    return 0;

}

#include<stdio.h>
int func1(int b);
int b =34;//this is a globalvariable since it is declared inside main
int func1(int b1){
    printf("the value of b inside func1 is %d \n",b);
    return b1*10;
}
int main()
{ 
    int b =344;
    //printf("the address of b inside main is %d \n",&b);
    int val = func1(b);
    int *ptr =&val;
    printf("the value of funct 1 is%d ",val);
    return 0;

}
// output :the value of b inside func1 is 34 
// the value of funct 1 is3440


#include<stdio.h>
int func1(int b);
int b =34;//this is a globalvariable since it is declared inside main
int func1(int b1){
    static int myvar = 0;
    printf("the value of my var is %d\n",myvar);
    printf("the value of b inside func1 is %d \n",b);
    myvar++ ;
    return b1*10 + myvar;
}
int main()
{ 
    int b =344;
    //printf("the address of b inside main is %d \n",&b);
    int val = func1(b);
     val = func1(b);

    int *ptr =&val;

    printf("the value of funct 1 is%d \n",val);
    return 0;

}
//IF STATIC VARIABLE not declare tthen start from 0.BUT if declare then start from declare variable.
// output :the value of my var is 0
// the value of b inside func1 is 34
// the value of my var is 1
// the value of b inside func1 is 34
// the value of funct 1 is3442(3400+2)

#include<stdio.h>
int func1(int b);
int b =34;//this is a globalvariable since it is declared inside main
int ret(){
    return 43*3;

}
int func1(int b1){
    static int myvar = ret();
    printf("the value of my var is %d\n",myvar);
    myvar++ ;
    return b1*10 + myvar;
}
int main()
{  int b =344; 
    int val = func1(b);
     val = func1(b);
    int *ptr =&val;
    printf("the value of funct 1 is%d \n",val);
    return 0;
}
// OUTPUT:error shown
// it says that initilizer element is not a constant.
//static var has take directly because it run before main function