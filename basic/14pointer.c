// WHAT IS A POINTER
/* 1).variable which stores the address of another variable
2).canbe of type int ,char or any other pointer
3).size depent on architecture e.g 2bytes for 32 bits
pointer declared by * symbol
int *ptr=&var;
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
  printf("lets learn about pointer\n");
  int a = 76;
  printf("the value of a is %d\n", a);
  return 0;
}
// OUTPUT1:the value of a is 76
#include <stdio.h>
int main(int argc, char const *argv[])
{
  printf("lets learn about pointer\n");
  int a = 76;
  int *ptra = &a;
  printf("the value of a is %d\n", *ptra);
  return 0;
}
// OUTPUT2:the value of a is 76
// ptra =&a

#include <stdio.h>
int main(int argc, char const *argv[])
{
  printf("lets learn about pointer\n");
  int a = 76;
  int *ptra = &a;
  //%x is number in hexadecimal format
  printf("the value of a is %x\n", ptra);
  return 0;
}
// OUTPUT3:the value of a is 61ff18

#include <stdio.h>
int main(int argc, char const *argv[])
{
  printf("lets learn about pointer\n");
  int a = 76;
  int *ptra = &a;
  //%x is number in hexadecimal format
  // print pointer address
  printf("the address of a pointer to a is %p\n", &ptra);

  return 0;
}
// OUTPUT4:the address of a pointer to a is 0061FF18

#include <stdio.h>
int main(int argc, char const *argv[])
{
  printf("lets learn about pointer\n");
  int a = 76;
  int *ptra = &a;
  int *ptr2 = NULL;
  //%x is number in hexadecimal format
  // print pointer address
  printf("the address of a pointer to a is %p\n", &ptra);
  printf("the value of a is %d\n", *ptra);
  printf("the address of a is %p\n", &a);
  printf("the value of a is %x\n", ptra);
  printf("the address of a is %p\n", ptra);
  printf("the value of a is %d\n", a);
  printf("the address of some garbage is %p\n", ptr2);

  //&a=ptra

  return 0;
}
// OUTPUT5:
//  the address of a pointer to a is 0061FF18
//  the value of a is 76
//  the address of a is 0061FF1C
//  the value of a is 61ff1c
//  the value of a is 0061FF1C
//  the value of a is 76
// the address of some garbage is 00000000

/* USES OF POINTER*/
//Dynamic memory allocation
//Arrays,function,and structure
//return multiple value from a function
//pointer reduce the code and improve the performance