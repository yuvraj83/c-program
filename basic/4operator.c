/* operator in c
so what is an operator
an operator is a symbol used to perform operation
*/
/*Arithmetic operator(+-)*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a;
    float b;
    a = 34;
    b = 6.36;
    printf("a+b=%f\n", a + b);
    printf("a-b=%f\n", a - b);
    printf("a*b=%f\n", a * b);
    printf("a/b=%f\n", a / b);
    // printf("a%b=%d\n", a % b);
    //  if we use %d in place of %f they will give our memory address not operation .
    return 0;
}

/* RELATIONAL OPERATOR*/
/* ==, !=,>,<,>=,<=*/
/* in relational operator if condition is true give output 1 and for false give 0.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a, b;
    a = 34;
    b = 6;
    printf("a+b=%d\n", a == b);
    printf("a-b=%d\n", a != b);
    printf("a*b=%d\n", a != b);
    printf("a/b=%d\n", a == b);
    /*OUTPUT
    a+b=0
 a-b=1
 a*b=1
 a/b=0*/

    return 0;
}
/*LOgical OPerator
(&&) ,(||),(!)*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a, b, c;
    a = 34;
    b = 6;
    c = 0;
    printf("a||b=%d\n", a || b);
    printf("a||c=%d\n", a || c);
    printf("a&&b=%d\n", a && b);
    printf("a&&c=%d\n", a && c);
    printf("a&&b=%d\n", !(a && b));
    printf("a&&c=%d\n", !(a && c));
    printf("a||b=%d\n", !(a || b));
    /*OUTPUT
    a||b=1
 a||c=1
 a&&b=1
 a&&c=0
 a&&b=0
 a&&c=1
 a||b=0*/
    return 0;
}
/*BITWISE OPERATOR
0=(00),1=(01) ,2=(10),3(11)*/
/*
and operator=both of them coreect only when correct
or operator= one of them correct
exor(^)operator=one correct and one false*/

#include <stdio.h>
int main()
{
    /* code */
    int a, b, c;
    a = 2;
    b = 3;

    printf("a&b=%d\n", a & b);
    printf("a|b=%d\n", a | b);
    printf("a^b=%d\n", a ^ b);

    return 0;
} /*output
 a&b=2 (10)
 a|b=3 (11)
 a^b=1 (01)*/

// ~ is the one's compliment operator
//<< is the binary left shift operator
//>> is the binary right shift oprator

/*
ASSIGNMENT OPERATOR[=,+=,-=,*=,/=,]*/
/*


MISCELLENEOUS OPERATOR
 sizeof()=return size of variable.
 & (return the addresss of a variable ,&a).
 ,*(pointer to a variable *a).,
 ?:(conditional expression )*/

/*OPERATOR PRECEDENCE
POSTFIX(LEFT TO RIGHT)
UNARY(RIGHT TO LEFT EXCEPTION) , MULTIPLICATIVE(*,/,%) ,ADDITIVE(+-),SHIFT,RELATIONAL,EQUALITY,BITWISE,LOGICAL,CONDITIONAL,ASSIGNMENT,COMMA*/
