//what is a recursive function?
//recursive function or recursion is a process when a function calls acopy of itself to work on a smaller problem
/*void sum()
{
    sum();
}
*/
// any function which calls itself is callled recursive function.
//This makes the life ofprogrammmer easy by dividing a given problem into easier.
//A termination condition is imposed on such functtion to stop them executing copies of themselves forever.
//Any problem that can be solve recursively,can also be solved iteratively.

// why RECURSION?
//however some problem are best suited to  be solved using reccursion
 //for e.g. tower of hanoi,fibbonacci series,factorial finding etc.
 //FACTORIAL CALCULATION
 // the case at which the functiondoesnot recur is called the base case.
 //the instance where the function itself to perform a subtask it is called the recursive case.
 //for factorial calculation the base occur at the parameter value of 0 and 1(0!=1,1!=1)
 // we can also find factorial with for loop.
 /*#include<stdio.h>
 //we candeclare function or not function run because declaration is not must condition
 int factorial(int number);//FUNCTION DECLARATION

 int factorial(int number){        //FUNCTION DEFINITION
    if (number==1||number==0)
    {
        return 1;
    }
    else{
        return(number*factorial(number-1));  //RECURSIVE CALL
    }
    
 }
 int main()            //FUNCTION CALL
 { int num;
    printf("Enter the number you want the factorialof:\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d\n",num,factorial(num));
    
    return 0;
 }
 */


 //FOR LOOP OR ITERATION
 #include<stdio.h>
 
int main()            //FUNCTION CALL
 { 
    int num,fact;
    printf("Enter the number you want the factorialof:\n");
    scanf("%d",&num);
                
                    if (num==0||num==1){
                return 1;
                }
 for (int i = 0; i < num; i++)
 {  

    factorial=num*(factorial(num-1));
    
 }
 
                
            
            
      printf("the factorial of %d is %d\n",num,factorial(num));
      return 0;
     
    }
    
    
    
 
 
