/*Write a C program to find sum of all even numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int n, i, sum;
    sum =0;
    printf("Enter upper limit:");
    scanf("%d",&n);
    for(i=2; i<=n; i+=2){
        sum += i;
    }
    printf("sum = %d\n",sum);
    return 0;
}

