//FUNCTION FOR DYNAMIC MEMORY ALLOCATION IN C
/*  in dynamic memory allocation, the memory is allocated at runtime from the heap segment .
//we have  four funvtion that help us achieve this task:
1.malloc 2.calloc    3.realloc   4.free
*/
//MALLOC
/*1. malloc() stand for memory allocation.
2.It reserve a block of memory with the given amount of bytes.
3.the return value is a void pointer to the allocated space.
4.Therefore the void pointer needsto be casted to the apppropriate type as per the requirement.
5.however,if the space is insufficient,allocation of memory fails and it return a NULL pointer.
6.all the value at allocated memory are initialized to garbage values

//SYNTAX:
ptr = (ptr-type*)malloc(size_in_bytes)
int *ptr;
ptr = (int*)malloc(3*sizeof(int));
*/

//CALLOC
/* calloc stand for contiguous allocation.
it reserve n blocks of memory with the given amount of bytes.
the return value is a void pointer to the allocated space.
therefore the void pointer needs to be casted to the appropriate type as per the requirements.
however, if the space is to be casted to the appropriate type as per the requirement
howeever,if the space is insufficient ,allocation of the memory fails and it return a NULL pointer.
all the value at allocared memory are initialized to 0.
//SYNTAX:
ptr = (ptr-type*) calloc(n,size_in_bytes)
*/

//REALLOC
/* realloc stands for reallocation.
if the dynamically allocatd memory is insuffficient we can change the size of previously allocated memory using realloc()function.

SYNTAX:
ptr = (ptr-type*) realloc(ptr,new_size_in_bytes)
*/

//FREE
/* free() is used to free the allocated memory.
if the dynamically allocated memory is not required anymore,we can free it using free function.
this will free the memory being used by the program in the heap.
 
 SYNTAX:
 free(ptr)
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of malloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr = (int*) malloc(n *sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("enter the value no %d of this array\n",j);
        scanf("%d",&ptr[j]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("the value at %d of the array is %d\n",j,ptr[j]);
       
    }
    
    
    return 0;
}
//output:
/*  Enter the size of the array you want to create
5
enter the value no 0 of this array
2
enter the value no 1 of this array
3
enter the value no 2 of this array
4
enter the value no 3 of this array
5
enter the value no 4 of this array
6
the value at 0 of the array is 2
the value at 1 of the array is 3
the value at 2 of the array is 4
the value at 3 of the array is 5
the value at 4 of the array is 6
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr = (int*) calloc(n ,sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("enter the value no %d of this array\n",j);
        scanf("%d",&ptr[j]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("the value at %d of the array is %d\n",j,ptr[j]);
       
    }
    
    
    return 0;
}
// output:
/*Enter the size of the array you want to create
3
enter the value no 0 of this array
1
enter the value no 1 of this array
2
enter the value no 2 of this array
3
the value at 0 of the array is 1
the value at 1 of the array is 2
the value at 2 of the array is 3
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);
    ptr = (int*) calloc(n ,sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("enter the value no %d of this array\n",j);
        scanf("%d",&ptr[j]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("the value at %d of the array is %d\n",j,ptr[j]); 
    }

{
    //use of realloc
    printf("Enter the size of the new array you want to create\n");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr ,n *sizeof(int));
    for (int j = 0; j < n; j++)
    {
        printf("enter the new value no %d of this array\n",j);
        scanf("%d",&ptr[j]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("the newvalue at %d of the array is %d\n",j,ptr[j]);
       
    }
}
    free(ptr); 
    
    return 0;
}

// output:
/*Enter the size of the array you want to create
4
enter the value no 0 of this array
1
enter the value no 1 of this array

2
enter the value no 2 of this array
3
enter the value no 3 of this array
4
the value at 0 of the array is 1
the value at 1 of the array is 2
the value at 2 of the array is 3
the value at 3 of the array is 4
Enter the size of the new array you want to create
3
enter the new value no 0 of this array
1
enter the new value no 1 of this array
2
enter the new value no 2 of this array
3
the newvalue at 0 of the array is 1
the newvalue at 1 of the array is 2
the newvalue at 2 of the array is 3
*/

//FREE USE EFFICIENTLY IN BETWEEN THE PROGRAM.