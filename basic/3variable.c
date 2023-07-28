/*preprocessing=>compilation=>Assembly=>linking=>loading(ram)*/
// what is a variable?
// int a;
// int a=4;
// rules can contain alphabet digit or underscore
// can't start digit or symbol
// no whitespace and reserved keyword is allowed

/* Data type in c
basic data types=int ,char,float ,double.
derived data types= array ,pointer,structure,union.
Ennumeration data types:emum
void daata types:void
*/
// data types:size
#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    printf("%lu", sizeof(int));
    return 0;
}
/*PS C:\Users\HP\Desktop\c-programs> gcc size1.c

PS C:\Users\HP\Desktop\c-programs> .\a.exe
4 byte

similarly we can check size of all data types*/
