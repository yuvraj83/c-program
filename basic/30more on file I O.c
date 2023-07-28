/*WORKING WITH FILE IN C
---->WHEN working with files,we have to declare a pointer of type FILE.[file *ptr =NULL;]
---->stdio.h contains a function called fopen() for opening a files in c
--->This declaration helps us to work with files through c program
--->when working with files,we have to declare  pointer of type FILE 
----->SYNTAX FOR OPENING A FILE IN STANDARD I/O IS:
------->ptr = fopen("fileopen","mode")
---> in order to read/write to a fiel we can use fsacf/fprintf function
----->fscaf(fp,"%s",buff);fprintf(fptr,"marks = %d",salary);
---->fclose(fptr);
*/
/*MODE AND DESCRIPTION
(r)--->opens an existing text file for reading
(w)--->opens a file for writing.if it doesnot exist then a new file is created Writing start from the beginning of the file
(a)---->opens a text file for writing in appending mode. if it does not exist, then a new file is created .the program will start appending content to the existing file content.
(r+)---> this mode will open a text file for both reading and writing
(w+)--->opens a text file for both reading and writing.
It first truncates the file to zero length if it exist ,otherwise creates a file if it is does not exist
(a+)--->opens a text file for both reading and writing.it creates a file if it is does not exist.The reading will start from the begginning but writing can only append to file
*/
/*OTHER FILE I/O FUNCTION IN C
there are various function provided by c  standard library to read and write a file character by character or in the form of a fixed length string
some of them are
[fputc,fputs,fgetc,fgets]
-------->FPUTC FUNCTION IN C
--->simplest function to write character to a file is fputc
--------->SYNTAX OF fputc goes as follows-->c use for character and s use for string
--->int fputc(character,FILE pointer);
--->It return the writtten character written on success .
--->On failure it return EOF
--->the EOF  is a constant defind in the header file stdio.h
*/
/*FPUTS IN C
--->fputs function is used to write a null terminated string to a file in c 
--->int fputs(const char*s, FILE*p)
//for string function
*/
/*FGETC FUNCTION IN C
  ---> simplest function to read character to a file is fgetc.
  ------->SYNTAX OF FGETC goes as follows
  -->int fgetc (FILE *fp);
  --->It returns the read character on success
  ---->On failure it returns EOF
  --->thi EOF is a constant defined in the header file stdio.h
*/
/*FGETS IN C
--->fgets function is used to read a null terminated string to a file in c.
---->int fgets(const char*s,int n, FILE*fp)
*/

/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67myfile.txt","r");
    char c = fgetc(ptr);
    printf("the character I read was %c \n",c);
    c = fgetc(ptr);
    printf("the character I read was %c \n",c);
    fclose(ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
        FILE *ptr = NULL;
    ptr = fopen("67myfile.txt","r");
    char str[4] ;
     fgets(str,3,ptr);
    printf("the string is %s\n", str);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","w");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","r+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","w+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}*/
#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("67file.txt","a+");
    fputc('o',ptr);
    fputs("this is harry",ptr);

    return 0;
}


