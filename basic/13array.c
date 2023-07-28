// ARRAYS IN C
/*1). AN array is a collection of data items of same type.
2).items are stored at contiguous memory location.
3).It can also store the collection of derived data types,such as pointers,structures etc.
4).A 1-D array is like a list.
5).A 2-D array is like a table.
6).the c language place no limits  on the numbeer of dimension in an array.
7).some text refer to 1-D array as vectors,2-D array as matrices,and use the general term array whenn the number of dimension is unspecified or unimportant.
*/
/*   WHY DO WE NEED ARRAYS
1).code that use arrays is sometimes more organised and readable
2).if you were to store the marks ina test of 56 student creating a variable will make program cluttered and messy.
3).SOLUTION TO THIS IS ARRAY.
4).we can create array of integer  and store thenconsecutive marks corresponding to the roll number in the array.
*/
/*ADVANTAGE OF ARRAY
1).it is used to represent multiple data items of same type by using only single line
2).accesing an item in agiven array is very fast
3).2-D array makes it easy in mathematical application as it is used to represent a matrix.*/
/*PROPERTIES OF ARRAY
1).DATA in an array is stored in contiguous memory location
2).each element of array is of same size
3).any elementof the array with given index can be accessed very quickly by using its address which can be calculated using the base address and the index.*/
// SYNTAX OF ARRAY
//  Data_type name[size]
#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 34;
    printf("marks of student 1 is:%d\n", marks[0]);
    return 0;
}
// OUTPUT:marks of student 1 is:34

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array \n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf(" the value of %d element of the array  is:%d\n", i, marks[i]);
    }
    return 0;
}
// OUTPUT2:
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks[4] = {45, 35, 4, 6}; // declaration with initialize the array

    for (int i = 0; i < 4; i++)
    {
        printf(" the value of %d element of the array  is:%d\n", i, marks[i]);
    }

    return 0;
}
// OUTPUT3:SAME AS OUTPUT 2

#include <stdio.h>
int main()
{
    int marks[2][4] = {{45, 35, 4, 6}, {3, 2, 4, 5}}; // declare and initialize the 2-D array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" the value of %d,%d element of the array  is:%d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}
// OUTPUT4:

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int marks[2][4] = {{45, 35, 4, 6}, {3, 2, 4, 5}}; // declare and initialize the 2-D array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", marks[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// OUTPUT5:
// DISADVANTAGE OF USING ARRAYS
/*POOR time complexity of insertion and deletion operation
1).wastage of memory since array are fixed in size.
2).if there is enought space present in the memory but not 3)3).contiguous form you will not be able initialize your array.
4).it is not poosible to increase the size of array ,once you can declarein array.
*/