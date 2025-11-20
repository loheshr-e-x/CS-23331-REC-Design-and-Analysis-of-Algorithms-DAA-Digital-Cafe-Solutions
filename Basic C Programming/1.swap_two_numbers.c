/*
Given two numbers, write a C program to swap the given numbers.
For example:
Input Result
10 20 20 10
*/

#include<stdio.h>
int main(){
 int a,b;
 scanf("%d %d",&a,&b);
 int *ptr1=&a; int *ptr2=&b;

 /* method using pointers swapping two numbers using their address
 int temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=temp; */

 /* method using x-or operation */
 *ptr1=*ptr1^*ptr2;
 *ptr2=*ptr1^*ptr2;
 *ptr1=*ptr1^*ptr2;
 /*can also be done suing variables qa and b but done here because the pointers are declared*/

 printf("%d %d\n",
*ptr1,
*ptr2);

 return 0;
}
