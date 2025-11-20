/*
Write a C program to find the sum first N natural numbers.
For example:
Input Result
3     6

*/

#include<stdio.h>
int main(){
 long int n;
 scanf("%ld",&n);
 printf("%ld\n",n*(n+1)/2);
 return 0;
}
