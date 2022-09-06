/*Write a C program to print all odd number between 1 to 100.*/
#include<stdio.h>
int main()
{
    int i;
    printf("All odd numbers from 1 to 100 are:\n");
    for(i=1; i<=100; i+=2){
        printf("%d\n",i);
    }
    return 0;
}
