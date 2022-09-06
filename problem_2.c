/*Write a C program to print all natural numbers in reverse
(from n to 1). - using while loop*/
#include<stdio.h>
int main()
{
    int i, n;
    printf("enter starting value:");
    scanf("%d",&n);
    printf("Natural numbers from %d-1 in reverse: \n",n);
    i = n;
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
    return 0;
}
