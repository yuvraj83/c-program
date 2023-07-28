//FUNCTION CALL BY VALUE CALL BY REFERENCE
//When afunction is called the values(expression) that are passed in the called the argument or actual parameter
//formal parameter are local variable which are assigned values from the argument when the function is called

//TYPES OF FUNCTION CALLS IN C PROGRAMMING
/*IN C PROGRAMMING LANGUAGE WE CALL A FUNCTION IN TWO DIFFERENT WAYS ,BASED ON HOW WE SPECIFY THE ARGUMENT AND THESE TWO WAYS ARE:
#call by value ,call by reference
*/
//call by value 
//when we call afunction by value it means that we are passing the values of the arguments which are copied into the formal parameters of the function.
//which means that the original value remain unchanged and only the parameter inside the function changes.

//CALL BY REFERENCE
//the call by reference method of passing argument of c function copies the address of the argument into the formal parameters
//address of the formal argument are copied and then assigned the corresponding formal argument.
//CALL BY REFERENCE E.G.
#include<stdio.h>
void swap(int *x,int *y);
/* function definition to swap the values*/
void swap(int *x,int *y){
    int temp;
    temp = *x;//save the value at addresss x
    *x = *y;//put  y into x
    *y = temp ; //put temp into y
    return ;
}
int main()
{                        //CALL BY REFERENCE
    int a =34 ,b=74;
    printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d \n",a,b);
    
    
    return 0;
}

// SIMPLE  CODE
#include<stdio.h>
 void  changevalue( int *address);
  void  changevalue( int *address){
    *address = 345;//value at address

  }

 int main()
 { int a=34,b=56;
    printf("the value of a is %d\n",a);
      changevalue(&a);
      printf("the value of a is %d\n",a);

    
    return 0;
 }
 //QUICK QUIZ
 /*GIVEN TWO NUMBER A AND B ,add them subtract themand assign them to a and b using call by reference.
 a=4
 b=3
 after running the function ,the values of a and b should be
 a=7
 b=1
*/
