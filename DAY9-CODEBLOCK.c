#include<stdio.h>
void main()
{
    int number1,number2;
    printf("enter the number1 and number2\n");
    scanf("%d%d",&number1,&number2);
    if(number1>number2){
        printf("number1 is greater than number2\n");
    }
    else if(number1<number2){
        printf("number2 is greater than number1\n");
    }
    else{
       printf ("both are equal");
    }
    }
