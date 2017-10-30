/*************************************************************************
	> File Name: Reverse.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2017 06:35:01 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<assert.h>
void Reverse(char* str)
{
    assert(str);
    int end=strlen(str)-1;
    int begin=0;
    while(begin!=end&&begin-1!=end)
    {
        char tmp=str[end];
        str[end]=str[begin];
        str[begin]=tmp;
        begin++;
        end--;
    }
}

int main()
{
    char p[]="123456789";
    int i=0;
    for(;i<strlen(p);i++)
    {
        printf("%c",p[i]);
    }
    Reverse(p);
    for(i=0;i<strlen(p);i++)
    {
        printf("%c",p[i]);
    }
}
