#include<stdio.h>
int main(){
 int m1,m2,m3;
 scanf("%d %d %d",&m1,&m2,&m3);

 char *op=((m1>=65 && m2>=55 && m3>=50)||(m1+m2+m3>=180))?"The candidate is eligible":
                                                          "The candidate is not eligible";

 printf("%s\n",op);
return 0;
}
