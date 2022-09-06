/*Write a C program to find sum of all odd numbers between 1 to n*/

#include<stdio.h>
int main()
{
    int n, i, sum;
    sum = 0;
    printf("Enter the number of n:");
    scanf("%d",&n);
    for(i=1; i<=n
    ; i=i+2){
       sum += i;
    }
    printf("sum = %d",sum);
    return 0;
}
