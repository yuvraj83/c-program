//BREAK STATEMENT
//used to bring the program control out the loop
//the break statement is used inside loops or switch statement
//break statement can we used with[loops,switch case expression]
/*BREAK STATEMENT ARE USEFUL WHEN YOU WANT YOUR PROGRAM FLOW TO COMES OUT OF THE SWITCH BODY WHENEVER A BREAK STATEMENT IS ENCOUNTERED IN A SWITCH BODY,CONTROL COMES OUT OF SWITCH BODY.
*/
#include<stdio.h>
int main()
{ int i,age;
    for (i=0; i<10; i++)
    {
        printf("%d\n Enter your age",i);
        scanf("%d",&age);
        if (age>10)
        {
            break;
        }
        
    }
    
    /* code */
    return 0;
}

//CONTINUE STATEMENT
//USE TO bring the program control to the next iteration of the loop
//the continue statement skips some code inside the loop and continue with next iteration
// it is mainly used for a condition so that we can skip some lines of code for a particular condition.
#include<stdio.h>
int main()
{ int i,age;
    for (i=0; i<10; i++)
    {
        printf("%d\n Enter your age",i);
        scanf("%d",&age);
        if (age>10)
        {
            continue;
        }
        printf("we have not come acros any continue statement \n");
        printf("we have not come acros any continue statement \n");
        printf("we have not come acros any continue statement \n");
        printf("we have not come acros any continue statement \n");
        printf("harry is a good man \n");
        
    }
    
    
    return 0;
}
/*OUTPUT:
if we give input age>10 these printf line will not execute but if age<10 then this line will execute.
*/

//GO TO STATEMENT
//GO TO STATEMENT

/* #also called jump statement in c.
#used to transfer prograam conttrol to predefined label.
# Its use is avoided since it causes confusion for the fellow programmmers understandingthe code .
#GOTO statement is preferable when we need to break multiple loops using a single statement at a same time.
*/ 

#include<stdio.h>
int main()
{
    label:
    printf("we are inside label"); 
    printf("Hello world\n");
    goto label;
    //again and again goto label and print the statement.
    return 0;
}
//OUTPUT:INFINITE LOOP (so we avoid label tag)
#include<stdio.h>
int main()
{
    label:
    printf("we are inside label");
    goto end; 
    printf("Hello world\n");//this tag will ignore in output and directly print end statement
    goto label;
    end:
    printf("we are at end");
    
    return 0;
}
//OUTPUT:ignore hello world because goto directly end statement.
//USE OF GOTO STATEMENT
#include<stdio.h>
int main()
{
    int num;
    for (int i=0; i<8; i++)

    {
        printf("%d\n",i);
       for (int j=0; j<8; j++)
        { 
            printf("Enter the number.enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                //break;// break only skip previous step not exit
                goto end; 
                // goto statement exit the loop
            }
            
        }     
    }
    end:
    
    
    return 0;
}


