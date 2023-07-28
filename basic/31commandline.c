//COMMAND LINE ARGUMENT IN C
/*WHAT ARE COMMAND LINE ARGUMENTS?
---> command line argument is an important concept in C programming
---->sometimes we nned to pass argument from the command line to the program a set of inputs.
----->command line arguments are used to supply parameters to the program when it is removed.
---->It is mostly used when you need to control your program from the console
--->these argument are passed to the main() method.
*/
/* COMMAND LINE EXAMPLE
--->FFmpeg is  a free and open source project consisting of a vast software suite of libraries and program for handling video,audioand other multimedia files and streams.
--->FFmpeg.exe is a command  line utility written in c language.
--->other example include GIT,BREW,APT-GET etc.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d \n",argc);
    return 0;
}
//OUTPUT:THE VALUE OF argc is 1.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d \n",argc);
    return 0;
}
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d \n",argc);
    return 0;
}
/*PS C:\Users\HP\Desktop\c-programs> .\tut68.exe harry is
THE VALUE OF argc is 3 
PS C:\Users\HP\Desktop\c-programs> .\tut68.exe harry is very good man  
THE VALUE OF argc is 6 
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("THE VALUE OF argc is %d \n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("this argument number %d has value of %s \n",i,argv[i]);
    }   
    return 0;
}
/*OUTPUT:
THE VALUE OF argc is 1 
this argument number 0 has value of C:\Users\HP\Desktop\c-programs\tut68.exe */

    /*if (argc >= 2)
    {
        printf("the argument supply are :\n");
        for (int i = 0; i < argc; i++)
        {
            printf("%s\t".argv[i]);
        }
        
    }*/
    
    