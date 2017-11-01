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

typedef struct C
{
    char a;
    int b;
    char c;
}C;

typedef struct D
{
    int a;
    char b;
    char c;
}D;

typedef struct E
{
    char a;
    char b;
    int c;
}E;
int main()
{
    printf("%d\n",sizeof(A));
    printf("%d\n",sizeof(B));
    printf("%d\n",sizeof(C));
    printf("%d\n",sizeof(D));
    printf("%d\n",sizeof(E));
    return 0;
}
