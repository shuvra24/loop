/*Write a C program to input a number from user and print
multiplication table of the given number using for loop.*/
#include<stdio.h>
int main()
{
    int num, i, r;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=1; i<=10; i++){
        r = num*i;
        printf("%d * %d = %d\n",num ,i ,r);
    }
    return 0;
}
