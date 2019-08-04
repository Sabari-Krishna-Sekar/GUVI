#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 printf("enter a value");
 scanf("%d",&a);
 if(a<0)
 {
   printf("enter a valid number");
 } 
 else if(a%2==0)
 { 
  printf("the value is even");
 }
 else
 {
  printf("the value is odd");
 }
} 
