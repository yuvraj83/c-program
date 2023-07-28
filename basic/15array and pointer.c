//ARRAY AND POINTER ARITHMETIC IN C
/* there are four arithmetic operator that can be used on pointers
e.g.[++,--,+,-]*/

#include<stdio.h>
int main()
{
    int a=34;
    int *ptra = &a;
    printf("%d\n",ptra);
     printf("%d\n",ptra+1);
    return 0;
}
//OUTPUT:
//6422296
//6422300

#include<stdio.h>
int main()
{
    char a='4';
    char *ptra = &a;
    printf("%d\n",ptra);
     printf("%d\n",ptra-1);
    return 0;
}
//OUTPUT:
//6422299
//6422298
#include<stdio.h>
int main()
{
    char a='4';

    char *ptra = &a;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
     printf("%d\n",ptra-5);
    return 0;
}
//OUTPUT:
//6422299
//6422300
//6422295



//Consider the following declaration:int arr[0];
//what is type of array?
//however arr ,by itself,,without any index subscripting can be assigned to to an integer pointer
//what type does arr[i] have?
//arr[i]==*(arr+i) 
// if we add 1 pointer increases size of int e.g 4bytes
//if array is a pointer to arr[0] then arr+i is a pointer to arr[i]

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    printf("value at position3 of the arary is %d\n",arr[3]);
    printf("the address of first element of the array is %d \n",&arr[0]);
     printf("the value of first element of the array is %d \n",arr);
    printf("the address of second element of the array is %d \n",&arr[1]);
    printf("the address of second element of the array is %d \n",arr+1);
    printf("the address of third element of the array is %d \n",&arr[2]);
    printf("the address of fourth element of the array is %d \n",&arr[3]);

     printf("the value at address of first element of the array is %d \n",*(&arr[0]));
     printf("the value at address of first element of the array is %d \n",*(arr));
    printf("the value of address of second element of the array is %d \n",*(&arr[1]));
    printf("the value at address of second element of the array is %d \n",*(arr+1));
    printf("the value at address of second element of the array is %d \n",arr[1]);


    return 0;
}
//OUTPUT:
// value at position3 of the arary is 4
// the address of first element of the array is 6422276 
// the address of first element of the array is 6422276 
// the address of second element of the array is 6422280 
// the address of second element of the array is 6422280 
// the address of third element of the array is 6422284 
// the address of fourth element of the array is 6422288 
// the value at address of first element of the array is 1
// the value at address of first element of the array is 1
// the value of address of second element of the array is 2
// the value at address of second element of the array is 2
// the value at address of second element of the array is 2

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    //arr++,arr-- both not work this line will throw error because constat not run
    int *arrayptr = arr;
      printf("value at position3 of the arary is %d\n",arr);

    arrayptr++;
    printf("value at position3 of the arary is %d\n",arr);

    return 0;
}
