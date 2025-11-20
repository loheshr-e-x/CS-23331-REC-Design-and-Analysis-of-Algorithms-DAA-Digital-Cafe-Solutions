/*
 Write a C program to find the eligibility of admission for a professional course based on the following criteria:
 Marks in Maths >= 65
 Marks in Physics >= 55
 Marks in Chemistry >= 50
 Or
 Total in all three subjects >= 180
 Sample Test Cases
 Test Case 1
 Input
 70 60 80
 Output
 The candidate is eligible
 Test Case 2
 Input
 50   80   80
 Output
 The candidate is eligible
 Test Case 3
 Input
 50   60   40
 Output
 The candidate is not eligible
*/

#include<stdio.h>
int main(){
 int m1,m2,m3;
 scanf("%d %d %d",&m1,&m2,&m3);

 char *op=((m1>=65 && m2>=55 && m3>=50)||(m1+m2+m3>=180))?"The candidate is eligible":
                                                          "The candidate is not eligible";

 printf("%s\n",op);
return 0;
}
