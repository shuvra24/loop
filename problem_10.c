/**
 * C program to count number of digits in an integer
 */

#include<stdio.h>

int main()
{
    int num, count;
    count = 0;
    printf("Enter any number:");
    scnaf("%d",&num);

    while(num!=0){
        num = num/10;
        count++;
    }
    printf("the total number of digit %d",count);
    return 0;

}
