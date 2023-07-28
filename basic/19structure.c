//WHAT IS STRUCTURE IN C
//structure are user defined data types in c.
//using structure allow us to combine data of different type of together.
// it is used to create a complex data types which contain diverse information 
// they are very similar to array but structure can store data of any types which is practically more useful
/*suppose we want to store information of 10,000 employees working at pvt.company
name,address,email,employee id
clearly we need some user defined data types use
*/
//DEFINING A STRUCTURE
struct (structure_name)
{ // data types
}structure_variables;
//DECLARING A STRUCTURE
//STRUCTURE DATA TYPE MAKE AND THEN NEXT STEP USE
struct Employee
{
    int id ;
    char name[53];
    float marks;
}; 
struct Employee e1,e2;
int main()
{
    struct Employee tt;//more variable can make in main function also
    //
    return 0;
}


//SECOND TYPE STRUCTURE DECLARE
//STRUCTURE DATA TYPE  MAKE DECLARE AND USE IN SAME STEP
struct Employee
{
    int id ;
    char name[53];
    float marks;
};e1,e2;
int main()
{
    struct Employee tt;//more variable can make in main function also
    return 0;
}

 //INITIALIZING A STRUCTURE

//data type created
struct Employee
{
    int id ;
    char name[53];
    float marks;
};

//FIRST TYPE
int main(int argc, char const *argv[])
{
    struct Employee e1;
    e1.id=12;
    e1.marks=34.12;
    return 0;
}
//SECOND TYPE
int main(int argc, char const *argv[])
{
    struct Employee e1 = {12,34.12};
    
    return 0;
}

// ACCESING STRUCTURE MEMBER
/*  array element are accessed using the subscript variable.
ina asimilar fashion structure member are accessed using dot[.] operator
(.)is called the as structure member operator
to access the member of structure,we use this operator in between "STRUCTURE NAME" & "MEMBER NAME"
*/

// WE CAN WRITE OUR FIRST PROGRAM

#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};
//struct Student harry,ravi,subham;//gloabl VARIABLE can access anywhere in another function

int main()
{
    struct Student harry,ravi,subham;//LOCAL VARIABLE =NOT access in another function
    harry.id =1;
    ravi.id = 2;
    subham.id =3;
     harry.marks=23 ;
    ravi.marks=34 ;
    subham.marks=43;
    harry.fav_char='p';
    ravi.fav_char='q';
    subham.fav_char='r';
    strcpy(harry.name,"HArry potter student of the year");
     strcpy(ravi.name,"ravi potter student of the year");
    strcpy(subham.name,"subham potter student of the year");



    printf("harry got %d marks\n",harry.marks);
     printf("ravi got %d marks\n",ravi.marks);
    printf("subham got %d marks\n",subham.marks);
    printf("harry got %d id\n",harry.id);
     printf("ravi got %d id\n",ravi.id);
    printf("subham got %d id\n",subham.id);
    printf("harry got %c character is:\n",harry.fav_char);
    printf("ravi got %c character is:\n",ravi.fav_char);
    printf("subham got %c character is:\n",subham.fav_char);




    printf("harry's name is:%s\n",harry.name);
    printf("ravi name is:%s\n",ravi.name);
    printf("subham name is:%s\n",subham.name);





    
    return 0;
}
//OUTPUT:
/*ravi got 34 marks
subham got 43 marks
harry got 1 id
ravi got 2 id
subham got 3 id
harry got p character is:
ravi got q character is:
subham got r character is:
harry's name is:HArry potter student of the year
ravi name is:ravi potter student of the year
subham name is:subham potter student of the year
*/
#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};
struct Student harry,ravi,subham; //global variable
void print(){
    printf("%s",harry.name);
}
int main(int argc, char const *argv[])
{
   strcpy(harry.name,"HArry potter student of the year");
   //printf("harry's name is:%s\n",harry.name);

    print();
    return 0;
}

//output:
// harry's name is:HArry potter student of the year
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

} harry,ravi,subham;//here also declare we check this output