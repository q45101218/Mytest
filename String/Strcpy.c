/*************************************************************************
	> File Name: Strcpy.c
	> Author: Yangkun
	> Mail: yangkungetit@163.com
	> Created Time: Fri 27 Oct 2017 12:07:56 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
char* Strcpy(char* dest,const char* src)
{
    assert(dest);
    assert(src);

    char* tmp=dest;

    while(*tmp++=*src++)
    {}
    return dest;
}

int main()
{
    char p1[]="we are famliy";
    char p2[]="helloworld";
    char* p3=Strcpy(p1,p2);
    printf("%s\n",p3);
    return 0;
}
