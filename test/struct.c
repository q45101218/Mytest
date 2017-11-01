/*************************************************************************
	> File Name: struct.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Nov 2017 12:29:44 AM PDT
 ************************************************************************/

#include<stdio.h>
typedef struct A
{
    int a;
    char b;
    char c;
    short d;
}A;


typedef struct B
{
    int a;
    char b;
    int c;
}B;

int main()
{
    printf("%d\n",sizeof(A));
    printf("%d\n",sizeof(B));
    return 0;
}
