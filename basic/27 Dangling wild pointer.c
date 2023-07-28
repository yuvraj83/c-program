//What is a DANGLING POINTER
//A pointer pointing to a freed memory location whose content has been deleted is called a dangling pointer.
//Dangling pointer arise during object destruction when an object that has an incoming reference is deleted or deallocated,without modifying the value of the pointer,so that the pointer still points to the memory location of the deallocated memory.

//CAUSES OF DANGLING POINTER
/*
--->Deallocation of memory
--->Returning localvariable in function calls
--->Variable going out of scope.
*/
// --->Deallocation of memory
/* when memory is deallocated ,the pointer keeps pointing to the freed space
char *str ="harry!"
int a;
int *ptr = (int*)malloc(sizeof(int));
free(ptr);//ptr now becomes a dangling pointer
ptr = NULL;//ptr no longer dangling pointer
*/
//--->Returning localvariable in function calls
#include<stdio.h>
int *myfunc()
{
    // a is local variable and goes out of scope on function return over.
    int a= 34;
    return &a;
}

int main()
{
    int *ptr = myfunc();//ptr point to invalid location
    printf("%d",*ptr);
    return 0;
}

// --->Variable going out of scope.
#include<stdio.h>


int main()
{
    int *ptr;//scope start
    {
        int i=0;
        ptr = &i;//ptr points to invalid location
        //SCOPE END
        //ptr is now a dangling pointer
    }
        printf("%d",*ptr);
    
    
    return 0;
}

//IS DANGLING POINTER A GOOD THING TO HAVE
/*
dangling pointer can introduce nasty bugs in our program.
dangling pointer bugs frequently become security holes at times.
we can avoid issues caused by dangling pointer by initializing pointer to NULL.
After de-allocating memory.pointer will be no longer dangling.
assignng NULL value means pointer is a null pointer now.
*/
//CODE
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int*)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1] = 43;
    free(ptr);

    return 0;
}


//WILD POINTER IN C
/* 
uninitializedpointer known as wild pointer
these pointer point to some arbitrary location in memory and may cause a program to crash or behave badly.
dereferencing wild pointer can cause nasty bugs.
It is suggested to always initialize unused pointer to NULL.
*/

//EXAMPLE :
/*IN THE FOLLOWING PROGRAM ,ptr is a wild pointer untill it is given the address of a.
int a ;
int *ptr;
ptr = &a;//put no longer wild
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 334;
    int *ptr;//this is a wild pointer
  //  *ptr =34;//this is not a good thing to do so
    ptr=&a;
    printf("the value of a is %d\n",*ptr);
    return 0;
}

//output:the value of a is 334