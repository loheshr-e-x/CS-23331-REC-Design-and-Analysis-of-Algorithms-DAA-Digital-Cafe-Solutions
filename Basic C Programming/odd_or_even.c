/*
Write a C program to find whether the given integer is odd or even? 
For example:
Input Result
12 Even
11 Odd
*/
#include<stdio.h>
int main(){
 int a;
 scanf("%d",&a);
 (a%2==0)?printf("Even\n"):printf("Odd\n");
 return 0;
}
