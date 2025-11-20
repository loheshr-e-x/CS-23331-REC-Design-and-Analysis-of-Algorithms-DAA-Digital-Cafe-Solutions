/*
  Malini goes to BestSave hyper market to buy grocery items. BestSave hyper market provides 10% discount on the bill amount B when ever the bill amount B is more
  than Rs.2000.
  The bill amount B is passed as the input to the program. The program must print the final amount A payable by Malini.
  Input Format:
  The first line denotes the value of B.
  Output Format:
  The first line contains the value of the final payable amount A.
  Example Input/Output 1:
  Input:
  1900
  Output:
  1900
  Example Input/Output 2:
  Input:
  3000
  Output:
  2700
*/

#include<stdio.h>
int main(){
   int amt;
   scanf("%d",&amt);
   int op=(amt>2000)?(amt-amt*0.1):amt;
   printf("%d\n",op);
   return 0;
}
