#include<stdio.h>
int main()
{
    int n, i, sum;
    sum = 0;
    printf("Enter upper limit:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("sum = %d\n",sum);
    return 0;
}
