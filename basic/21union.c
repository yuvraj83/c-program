//union is similar to structure
/*union is a user defined data types 
the difference between structure and union lies in the fact that in structure each member has its own storage location,wheras member of a union uses a single shared memory location
the single shared memory location is equal to the size of its largest data member
*/
//DECLARING AND ACCESING UNION MEMBERS
/*same as sructure struct replace union
*/
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct student s1;
    s1.id=1;
    s1.marks=45;
    s1.fav_char='u';
    strcpy(s1.name,"harry");
    printf("the id %d\n",s1.id);
    printf("the marks is  %d\n",s1.marks);
    printf("the fav_char is %d\n",s1.fav_char);
    printf("the name is %d\n",s1.name);
    
    return 0;
}
//STRUCTURE OUTPUT
/*the id 1
the marks is  45
the fav_char is u
the name is harry
*/