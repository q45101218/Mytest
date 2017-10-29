/*************************************************************************
	> File Name: Strlen.c
	> Author: Yangkun
	> Mail: yangkungetit@163.com
	> Created Time: Sat 28 Oct 2017 11:18:26 PM PDT
 ************************************************************************/

#include<stdio.h>
size_t Strlen(const char* src)
{
    size_t count=0;
    while(*src++)
    {
        count++;
    }
    return count;
}

int main()
{
    char* p="abcdef";
    char p1[]="hello world";
    char p2[]={'a','b','\0','c'};
    printf("%d\n",Strlen(p));
    printf("%d\n",Strlen(p1));
    printf("%d\n",Strlen(p2));
    return 0;
}
