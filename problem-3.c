/*Write a C program to print all alphabets from a to z. - using while loop*/
#include<stdio.h>
int main()
{
    int ch;
    ch = 'a';
    while(ch<='z'){
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}
