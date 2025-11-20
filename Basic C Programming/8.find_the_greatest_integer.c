/*
Write a C program to find the biggest among the given 3 integers?
For example:
Input       Result
10 20 30    30
*/
#include<stdio.h>
int main(){
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 printf("%d\n",(a>b && a>c)?a:(b>c)?b:c);
}
