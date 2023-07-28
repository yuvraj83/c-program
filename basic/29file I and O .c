//FILE I/O IN C
/*WHY DO WE NEED A FILE?
--->Files are used to store data and information
---->files are used and read and access data anytime from the hard disk.
--->files make it easy for a programmer to access and store content without losing it on program termination
*/
/* VOLATILE MEMORY
--->VOLATILE MEMORY is computer storage that only maintains its data while the device is powered
---->the ram will hold data ,programs and information as long as it has a constant power supply but immediately the powwer is interrrupted all that content is cleared.
--->the volatile memory will only hold data temporarly
*/
/*NON-VOLATILE-MEMORY
--->non volatile memory is computer memory that can retained the stored information even when not powered .
---->this type of memory is also refered to as permanent memory since data stored within it can be retrieved even when there is no constant power supply.
--->it is used for long term storage.
*/
/*WHY DO WE NEED FILES
--->when a c program is terminated ,the data stored in ram is lost.
---->storing in a file will preserve our data even after the program terminates
---->RAM is not able to ahndle quitee large amount of data due to its small size relative to the haard disk.
--->it is easy to transfer data files.
*/
/*TYPES OF FILES
They are two types of files
text files-->plain text
binary files-->(0 1) more security provide
*/
//in c we can perform these high level operation on files 
//creating the files --->
//opening the files 
//closing a file 
// reading from and writing to a file
  
 //TUT64.C
 //FILE I/O FUNCTION IN C

/*WORKING WITH FILE IN C
---->WHEN working with files,we have to declare a pointer of type FILE.[file *ptr =NULL;]
--->This declaration helps us to work with files through c program
when working with files,we have to declare  pointer of type FILE 
*/
//file SAVE HARD DISK(as files)

/*OPENING A FILE =CREATING OR EDITNG A FILE
-->stdio.h contains a function called fopen() for opening file in C.
SYNTAX FOR OPENING A FILE IN STANDARD I/O IS:
ptr = fopen("fileopen","mode")
MODE-->'r'(read),'w'(write),'a'(append),'rb'(read binary mode)
-->for e.g. fopen("E:\\Code\\harry.txt","w")
--->fopen("E:\\Code\\bhai.bin","rb");
*/

/*CLOSING A FILE
Any file which is opened in a C program  needs to be closed.
closing a file is accomplished by the library function fclose()
fclose(fptr);//fptr is the file pointer associated with file to be closed 
*/
/*READING A FILE
-->in order to read a file,we can use fscanf function.
-->this function is file version of scanf function
-->fscanf expect a file pointer in addition to the other arguments which scanf expects.
-->we will have to open the file in read mode in order to use this function
*/
/*WRITING TO A FILE
-->in order to write to a file,we can use fprintf function
--->this function is file version of printf function
-->fprintf expects a file pointer in addition to the other arguments which printf expects
-->we will have to open the file in write mode in order to use this function
*/
  //FUNCTION FOR FILE I/O IN C LANGUAGE
  /*64myfile.txt
  this_is my content int the file 
this is a good file
this file is made by yuvraj
  */
#include<stdio.h>
int main()
{      //*******Reading a file***********
    FILE *ptr=NULL;
    char string[34];
    ptr = fopen("64myfile.txt","r");  //READING MODE
    fscanf(ptr,"%s",string);
    printf("the content of this file has %s:\n",string);

    return 0;
}
// OUTPUT:the content of this file is this_is:

#include<stdio.h>
int main()
{   //*******writing a file***********
    FILE *ptr=NULL;
    char string[64]="this content was produced by tut64.c";
    ptr = fopen("64myfile.txt","w");  
    fprintf(ptr,"%s",string);
    return 0;
}
/*OUTPUT:64MYfile.txt
this content was produced by tut64.c
*/
//IN WRITE MODE OLD CONTENT ERASE AND NEW CONTENT PRINT FROM FIRST LINE .to SOLVE this proble we can use APPEND MODE.
#include<stdio.h>
int main()
{   //*******Append mode***********
    FILE *ptr=NULL;
    char string[64]="this content was produced by tut64.c";
    ptr = fopen("64myfile.txt","a");  
    fscanf(ptr,"%s",string);
    return 0;
}
/*OUTPUT:
64myfile.txt
  this_is my content int the file 
this is a good file
this file is made by yuvraj
this content was produced by tut64.c
*/