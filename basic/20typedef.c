//typedef
#include<stdio.h>
int main()
{
    printf("");
    // typedef <previous_name> <alias_name>
    // typedef unsigned Long ul;
    // ul l1,l2,l3;
    typedef int integer;
    integer a=4;
    printf("value of a is %d",a);

    return 0;
}

//EXAMPLE 1 ON without typedef use
//typedef
#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

}std;
int main()
{
    struct Student s1,s2;
    s1.id = 34;
    s2.id=56;
    printf("value of s1 id is %d\n",s1.id);
    printf("value of s2 id is %d\n",s2.id);
    return 0;
}
//OUTPUT:
/*value of s1 id is 34
value of s2 id is 56
*/
//example 2 using typedef output same
#include<stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

}std;
int main()
{
        std s1,s2;
    s1.id = 34;
    s2.id=56;
    printf("value of s1 id is %d\n",s1.id);
    printf("value of s2 id is %d\n",s2.id);
    return 0;
}
//OUTPUT:
/*value of s1 id is 34
value of s2 id is 56
*/
int main()
{
   /* int* a,b;//int *a , b treated like this.
   //here this type declaration make [a is pointer],[b is integer]
    int c=89;
    a=&c;
    b=&c;
    */
   typedef int* intpointer;
   intpointer a,b;
   int c=89;
   
   a=&c;
   b=&c;


    // std s1,s2;
    // s1.id = 34;
    // s2.id=56;
    // printf("value of s1 id is %d\n",s1.id);
    // printf("value of s2 id is %d\n",s2.id);



    return 0;
}