/*
Write a C program to find the quotient and reminder of given integers. 
For example:
Input Result
12    4
3     0
*/

#include<stdio.h>
int main(){
 int a,b;
 scanf("%d %d",&a,&b);
 printf("%d\n%d\n",a/b,a%b);
 return 0;
}

