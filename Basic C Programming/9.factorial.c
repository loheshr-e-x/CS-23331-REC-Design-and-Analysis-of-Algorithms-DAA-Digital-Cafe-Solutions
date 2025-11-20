/*
Write a C program to find the factorial of given n. 
For example:
Input Result
5     120
*/

#include<stdio.h>
#include<math.h>
int main(){
 int n;
 scanf("%d",&n);
 printf("%ld\n",(long int)tgamma(n+1));
 return 0;
}
