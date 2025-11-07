#include <stdio.h>
int main() {
 int a, b;
 printf("Enter the 1st variable a: ");
 scanf("%d", &a);
 printf("Enter the 2nd variable b: ");
 scanf("%d", &b);
 
 a=a+b;
 b=a-b;
 a=a-b;
 
 
 printf("The numbers after swapping : a=%d, b=%d", a,b);
 return 0;

}