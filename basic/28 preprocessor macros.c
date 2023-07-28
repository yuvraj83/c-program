//PREPROCESSOR
//QUICK RECAP 
//compilerconvert textual form of a cprogram into an executable.
// ther are four phases for a c program to become an executable
/*PREPROCESSING
--->removal of comments 
--->expansion of macros
--->expansion of include files
*/
/*COMPILATION 
--->assembly level insruction  are generated
*/
/*ASSEMBLY
--->.o  ,.exe files are generate
--->function call are not resolved yet.
---> assembly level instruction converted to machine code (language)
*/
/*LINKING
-->Links the function implementation
*/
//what is C PREPROCESSOR
/*
---> c preprocessor comes under action before the actual compilation process.
--->c preprocessor is not part of the compiler
--->It is text substitution tool
--->all preprocessor command begin with a hash symbol.
---->e.g. #include<stdio.h,#include<stdlib.h> 
---->e.g. #include<time.h,#include<math.h> 
*/
//PREPROCESSOR COMMAND EXAMPLES
/*
-->#include,
-->#define
-->#undef
-->#ifdef
-->#ifndef
-->#if
-->#else
-->#elif

*/
//c preprocessor
#include<stdio.h>
#include<stdlib.h>
int* functionDangling()
{
    int a,b,sum;
    a=34;
    b=43;
    sum = a+b;

    return &sum;
}

int main()
{
    
    return 0;
}

//#INCLUDE  & #DEFINE PREPROCESSOR IN C
/*THE #INCLUDE DIRECTIVE
--->The #include directive causes the preprocessor to fetch the content of some other file to be included in the present file.
--->this file may in turn #include some other file(s) which may in turn do the same.
--->most commonly #include filehave a."h" extesion,indicating that htey are header files.
*/

/*TWO COMMON #INCLUDE FORMATS
--->In C programming there are two common format for #includes:
------>#include<headerfile.h>//the angle bracket say to look in the standard directories
------>#include "myfile.h" //the quatation marks say to look in the current directory
//DISK DRIVE full path is allowed, but discouraged since it is not portable:
------>#include<C:\program files\haary\bhai\somefile.h> //Too specific
------>#include<sysfile.h>//Relative and Portable path to the standard locations.
*/
//ctrl+F is use to FIND AND REPLACE THE WORD
//#DEFINE DIRECTIVE
/*
the #define directive is used to "define" preprocessor "variables".
the #define preprocessor directive can be used to globally replace a word with a number
it acts as if an editor did a global search-and-replace edit of the file.
#define pi=3.14
int a; char b;
*/
//USING #DEFINE FOR DEBUGGING
/* 
#define directivve can be used for debugging
we can have printing the statement that we only want active when debugging.
we can "protect" them in a "ifdef"
block as follows:
#define DEBUG
#ifdef DEBUG 
print statement 
#endif
#undef DEBUG 
*/
//MACROS USING #DEFINE
//We can also create macros using #define
//Macros operate much like function,but because they are expanded in place and are generally faster
/* #define PI=3.14
#define SQUARE[x]*[x]
area = PI*SQUARE(radius);
area = 3.14*radius*radius;
*/

#include<stdio.h>
#include<stdlib.h>
int* functionDangling()
{
    int a,b,sum;
    a=34;
    b=43;
    sum = a+b;

    return &sum;
}

int main()
{
    
    return 0;
}
 //CODE 1
 #include<stdio.h>
  #include"tut54.c"
int main()
{
    int var = 0;
    printf("this is me %d\n",var);

    
    return 0;
}
//OUTPUT:THIS IS ME 0
#include<stdio.h>
#include"tut54.c"
#define PI 3.14
int main()
{
    float var = PI;
    printf("this is PI is  %f\n",var);   
    return 0;
}
//output
//this is PI is  3.1400
#include<stdio.h>
#include"tut54.c"
#define PI 3.14
#define SQUARE(r) r*r
int main()
{
    float var = PI;
    int r =4;
    printf("this is PI is  %f\n",var);   
    printf("the arre a of the circle is %f\n",PI*SQUARE(r));

    return 0;
}
//output
//this is PI is  3.14000
// the arre a of the circle is 50.240000
//OTHER DIRECTIVES AND PREDEFINED MACROS
/*
--->preprocessor is a kind of automated editor that modifiesa copy of the original source code
---->the #include directive causes the preprocessor to fetch the content of some other file to be included in the present file
----->the C Programming there are two ccommon formats for #includes:
---->this file may in turn #include some other file(s) which may in turn do the same .
--->Most commonly the #included files have a".h" extension,indicating that they are header files.
--> The #define directive is used to "define" preprocessor "variables"
*/
//OTHER C PREPROCESSOR
/*#DEFINE,  #include,   #undef,  #ifdef  #ifndef,    #if    #else   #elif   
--->pragma :To issue some special commands to the compiler
*/
//PREDEFINED MACROS IN C
/*1. _DATE_ {THE current date as character literal in "MMM  DD YYYY" format}
 2. _TIME_ {This contains the current time as a character litral in "HH:MM:SS" Format.}
 3. _FILE_{ the current filename as a string literal}
 4._LINE_{The current line number as a decimal constant
 }
 5. _STDC_ Defined as I (one) when the compiler complies with the ANSI standard

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("file name is %s\n",__FILE__);
    printf("today DATE is %s\n",__DATE__);
      printf("time now is %s\n",__TIME__);
       printf("Line No is %d\n",__LINE__);
      printf("ANSI: %d\n",__STDC__);
     
     
    return 0;
}
//OUTPUT:
/*file name is tut60.c
today DATE is Jan 25 2023
time now is 00:24:31
Line No is 8
ANSI: 1*/