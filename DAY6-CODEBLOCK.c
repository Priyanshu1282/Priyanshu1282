#include<stdio.h>
void main()
{
float p,r,t,si;
printf("enter amount,rate,time");
scanf("%f%f%f",&p,&r,&t);
//time in month.
si=(p*r*t)/100;
printf("simplr interest=%f",si);
}
