/*
Write a C program to find the Nth term in the fibonacci series. 
For example:
Input Result
0     0
1     1
4     3
*/

#include<stdio.h>
long int nth_term(int n){
 if(n<2) return n;
 long int a=0,b=1,c=0;
 for(int i=2;i<=n;i++){
   c=a+b;
   a=b;
   b=c;
 }
 return b;
}

int main(){
 int n;
 scanf("%d",&n);
 if(n<0) return 0;
 printf("%ld\n",nth_term(n));
 return 0;
}
