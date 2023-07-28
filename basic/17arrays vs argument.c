//PASSING ARRAY TO A FUNCTION
//WHY AND HOW TO PASS ARRAY
/*  we pass array to a function when we need to pass alist of values toa given function.
WE CAN PASS ARRAY TO A FUNCTION:
1).By declaring array as aparameter in the function.e.g{int avg(int arr[])}
2).By declaring a pointer in the function to hold the base address of the array{int sum(int *ptr)}
*/

//1).IF YOU CHANGE THE VALUE OF THE ARRAY IT GET REFLECTED IN THE MAIN FUNCTION

//2).IF YOU CHANGE THE VALUE OF THE ARRAY IT GET NOT REFLECTED IN THE MAIN FUNCTION
#include <stdio.h>
//By declaring array as aparameter
int func1(int arr1[]);

int main()
{
    int arr[] = {23, 13, 3, 4};
    func1(arr);
    // printf("");
    // scanf("");
    return 0;
}
int func1(int arr1[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, arr1[i]);
    }
}
//argument pass by pointer
// By declaring a pointer in the function
#include <stdio.h>

int func1(int arr1[]);
void func2(int *ptr);
int main()
{
    int arr[] = {23, 13, 3, 4};
    
    func2(arr);
    return 0;
}
void func2(int *ptr){
        for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, ptr[i]);
    }
}
//OUTPUT1:
// the value of 0 is 23
// the value of 1 is 13
// the value of 2 is 3
// the value of 3 is 4

#include <stdio.h>
// By declaring array as aparameter
int func1(int arr1[]);

int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("the value at index 0 is %d\n", arr[0]);

    func1(arr);
    printf("the value at index 0 is %d\n", arr[0]);

    // printf("");
    // scanf("");
    return 0;
}
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, array[i]);
    }
}
// By declaring a pointer in the function

#include <stdio.h>
int func1(int arr1[]);
void func2(int *ptr);
int main()
{
    int arr[] = {23, 13, 3, 4};
    
    func2(arr);
    return 0;
}
void func2(int *ptr){
        for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, *(ptr+i));
    }
}
// OUTPUT:
// the value at index 0 is 23
// the value of 0 is 23
// the value of 1 is 13
// the value of 2 is 3
// the value of 3 is 4
// the value at index 0 is 23

#include <stdio.h>
// By declaring array as aparameter
int func1(int arr1[]);

int main()
{
    int arr[] = {23, 13, 3, 4};
    printf("the value at index 0 is %d\n", arr[0]);

    func1(arr);
    printf("the value at index 0 is %d\n", arr[0]);

    // printf("");
    // scanf("");
    return 0;
}
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, array[i]);
    }
    //by changing this line output will change in main function because array declare as a parameter
    array[0] = 382;
    return 0;
}
// OUTPUT:
// the value at index 0 is 23
// the value of 0 is 23
// the value of 1 is 13
// the value of 2 is 3
// the value of 3 is 4
// the value at index 0 is 382

#include <stdio.h>
// By declaring array as aparameter

int func1(int arr1[]);
void func2(int *ptr);
int main()
{
    int arr[] = {23, 13, 3, 4};
    
    func2(arr);
    func2(arr);
    return 0;
}
void func2(int *ptr){
        for (int i = 0; i < 4; i++)
    {
        printf("the value of %d is %d\n", i, *(ptr+i));
    }
    *(ptr+0)=34;
}

// OUTPUT:
// the value of 0 is 23
// the value of 1 is 13
// the value of 2 is 3
// the value of 3 is 4
// the value of 0 is 34
// the value of 1 is 13
// the value of 2 is 3
// the value of 3 is 4

#include <stdio.h>
int func1(int arr1[]);
void func2(int *ptr);
void func3(int arr[2][2]);
//passing MULTIDIMENSIONAL ARRAY

int main()
{
    int arr[][2] = {{23, 13}, {3, 4}};

    func3(arr);
    // func2(arr);
    // func2(arr);

    return 0;
}
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}

// the value of 0,0 is 23
// the value of 0,1 is 13
// the value of 1,0 is 3
// the value of 1,1 is 4
