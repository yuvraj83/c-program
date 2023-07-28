/*FORMAT SPECIFIER,CONSTANTS & ESCAPE SEQUENCE IN C*/
/*format specifier is a way to tell the compiler what type of data in a variable during taking input displaying output to the user
printf("this is a good boy %a.bf",var);will print var with b decimal point in a 'a character space.
lets to our IDE and learn about the format specifier.
*/
#include <stdio.h>

int main()
{
    int a = 8;
    float b = 7.33;
    printf("hello world\n");
    printf("the value of a is %d and the value of b is %f\n", a, b);
    printf("the value of b is %8.4f\n", b);

    /* %8.4f means that it take sapce of character  and 4pointt precision value */
    /*%d(integer),%c (character),%f(floating point number) ,%l(long), %lf(double),%LF(long double)*/
    return 0;
}
/* CONSTANT IN C*/
#include <stdio.h>
#define PI = 3.14
int main()
{
    int a = 8;
    const float b = 7.33;
    // PI=7.33;//cannot do this because c is a constant

    // b=7.22;//cannot do this because b is a constant
    printf("the value of b is %8.4f\n", b);

    return 0;
}
//OUTPUT:the value of b is   7.3300
/* ESCAPE SEQUENCE IN C */
// A n escape sequence in c programming language is a sequence of character
// it doesnot represent itself when used inside string literal or character.
// it is composed of two or more character starting with backslash\.for e.g \n (new line)
/*
\a(alarm or beep);\b(backspace);\f(form feed);\n(new line);\t(tab-horizontal);\v(vertical-tab);\\backslash;\'single quote;\"(double quote);\?(questionmark);\nnn(octal number);\xhh(hexadecimal number);null
*/

/* COMMENT IN C */
// single line comments
/*  multiline comments */
