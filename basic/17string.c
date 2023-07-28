//IS STRING A DATA TYPE IN C
/* NO
 we have char int float and other data types but no one string data type in c
 string is not supported data types in c but it is very useful concept used to model real world entities like naame,city etc
 we express string using an array of character terminated by a null character('\0')
*/

/*WHAT ARE STRING IN C
String array of terminated by anull character.
string in c is created by creating an array of characters. 
we need an extra character('\0')to tell the compiler that he string end here.
char name[] = "harry";
char name[] = {'h','a','r','r','y','\0'}
*/
/*char str[5];
gets(str);
printf("%s",str);
puts(str);
*/
#include<stdio.h>
void printstr(char str[]);
int main()
{
    char str[] = {'h','a','r','r','y','\0'};
      //OR
      char str[] = "harry";
 //harry same output but print one line at atime
    printstr(str);
    return 0;
}
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {  
    printf("%c",str[i]);
    i++;
}
}

//output:harry
#include<stdio.h>
void printstr(char str[]);
int main()
{
    //char str[] = {'h','a','r','r','y','\0'}; //harry
    //USER INPUT STRING
    char str[34] ; 
    printf("using custom function printstr\n");
    gets(str);
    //char str[100] ="harry";
    //printstr(str);
    printf("using in place of printstr %s\n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}
//in place of scanf we can use gets functionality.
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {  
    printf("%c",str[i]);
    i++;
}
printf("\n");
}

//output:
// using custom function printstr
// hello
// using in place of printstr hello
// using puts:
// hello