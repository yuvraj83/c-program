//WHAT IS STORAGE CLASSES IN C
/* A storage class is define scope,default intitial value &Lifetime of a variable.
in previous lecturee we saw the dynamic memory allocation is a way in which the size of data structure can we changed during the runtime.
memory assigned to a program in a typical architecture can be  broken down into four segments
--->1.code  2.static/global variable  3.stack  4.heap  <-----
*/
//WHAT IS STORAGE CLASS READ PREVIOUS CLASS
//a storage class define following attribute about a variable in c.
//1.SCOPE -->where will this value be available
// 2.DEFAULT INITIAL VALUE 
//   3.LIFETIME -->life of that variable

//STORAGE CLASSES IN C
/*(automatic,external,static ,register) variable
*/

//AUTOMATIC VARIABLE:AUTO STORAGE CLASS

//Scope-->Local to the function body they are defined in
//Default value:Garbage value(a random value)
//Lifetime:Till the end of the function block they are defiend in

//A variable defined without any storage class specification is default an automatic variable
//int harry and auto int harry are same.

//EXTERNAL VARIABLE
// they are same as global variables
// SCOPE-->global to the program they are defined in
// Default initial value:0
// Lifetime-->these variable are declared outside any function they are available throughout the lifetime of the program.
//Aglobal variable can be changed by any function in the program.
//int harry written outside any function will tell compiler that harry is a global variable.
// It is recommended to minimize the use of unnecessary global variable in aprogram.


//EXTERNAL VARIABLES:EXTERN KEYWORD
//Extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
//using extern will not allocate space for the variable
 /*int main(int argc, char const *argv[])
 {
    int harry = 90;
    printf("%d",harry);
 }
 #include<stdio.h>
 extern int harry;
 int main()
 {
    harry =56; 
    printf("%d",harry);
 

    return 0;
 }
*/
//STATIC VARIABLE:STATIC STORAGE CLASS
// Scope-->local to the block they are defined in
//Default Initial value-->0
//Lifetime-->they are available throughout the lifetime of the program 
//A static variable  remain under existence for use within the function for entire program run.
//static int harry written inside any function will tell compiler that harry is static variable
//It is recommended to minimize the use of unnecessary static variable in aprogram.


//REGISTER VARIABLE:REGISTER STORAGE CLASS
/*1. SCOPE-->local to the function they are declared in 
2. Default initial value -->garbage value
3. lifetime-->they are available till the end of the function value ,in which the variable is defined.
4. Register variable request the compiler to store the variable in cpu register instead of storing in the memory to have faster access.
5. Generally this is done for the variable which are being used frequently.
*/
#include<stdio.h>
int myfunc(int a ,int b){
    auto int sum ;//default is also auto
   sum = a+b;
   return sum;
}
int main()
{
   // declaration-->Telling  the compiler about the variable(No space reserved)
   // definition -->declaration +space reserved
   int sum = myfunc(3,5);
   printf("the sum is %d\n",sum);
   return 0;
}
//compilation errror show when only myfunc(3,5)--->int sum = myfunc(3,5)
// output: the sum is 8
#include<stdio.h>
int sum;
int myfunc(int a ,int b){
   // auto int sum ;//default is also auto
   sum = a+b;
   return sum;
}
int main()
{
   // declaration-->Telling  the compiler about the variable(No space reserved)
   // definition -->declaration +space reserved
   //int sum = myfunc(3,5);
   printf("the sum is %d\n",sum);
   return 0;
}
// output: the sum is 0.(default)
//TEMPT.C FILE
#include<stdio.h>
/*int main()
{
    
    return 0;
}*/
 //MAIN.CFILE
#include<stdio.h>
#include"tempt.c"

int main()
{
   int sum = 98;
  printf("the sum is %d \n",sum);
   
   return 0;
}
//shown rror because two main function declare so we can comment out one main program
//output :the sum is 98

#include<stdio.h>

//myfunc take argument from the function
int myfunc(int a,int b){
   auto int sum;
   sum =a+b;
   return sum;

}
extern int sum =344;

int main()
{
   int sum = myfunc(3,5);
  printf("the sum is %d \n",sum);
   
   return 0;
}
//shown eror because two main function declare so we can comment out one main program
//output :the sum is 8
//extern keyword not include


#include<stdio.h>
//myfunc take argument from the function
int myfunc(int a,int b){
  // auto int sum;
   //sum =a+b;
  extern int sum ;
  //extern keyword use to print global variable
   return sum;
}
// extern int sum =344;
int sum =343;
// extern int sum =344;
int main()
{
   int sum = myfunc(3,5);
  printf("the sum is %d \n",sum);
   
   return 0;
}
//output :the sum is 343

#include<stdio.h>
int myfunc(int a,int b){
     static int myvar;
   myvar++;
   printf("my var is %d\n",myvar);
   return myvar;

}
int main()
{
   int myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   return 0;
}

//output :
/*my var is 1
my var is 2
my var is 3
my var is 4
my var is 5
*/
#include<stdio.h>
int myfunc(int a,int b){
        //cpu register store variable output not change

   register int myvar;
   myvar++;
   printf("my var is %d\n",myvar);
   return myvar;

}
int main(int argc, char const *argv[])
{
   int myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   myvar = myfunc(3,5);
   return 0;
}

//output :
/*my var is 2985985
my var is 2985985
my var is 2985985
my var is 2985985
my var is 2985985
*/