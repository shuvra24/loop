/*Write a C program to print all even numbers between 1 to 100. -
using while loop*/

#include<stdio.h>
int main()
{
    int i;
    printf("All even numbers from 1 to 100 are:\n");
    i=2;
    while(i<=100){
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}
