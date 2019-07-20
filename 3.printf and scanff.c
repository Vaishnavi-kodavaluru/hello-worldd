#include<stdio.h>
#include<conio.h>
/***********************************************
*program: to read input from user and print sum and average
*************************************************/

void main(){
int a,b,sum;
float ave;
printf("enter the first value :");
scanf("%d",&a);
printf("enter second value :");
scanf("%d",&b);
sum=a+b;
ave=sum/2.0;
printf("sum = %d,ave= %f",sum,ave);
getch();
}


