/*************************************************************************
	> File Name: Strcat.c
	> Author: Yangkun
	> Mail: yangkungetit@163.com
	> Created Time: Fri 27 Oct 2017 02:28:01 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
char* Strcat(char* dest,const char* src)
{
    assert(dest);
    assert(src);

    char* tmp=dest;
    while(*tmp++)
    {}
    tmp--;

    while(*tmp++=*src++)
    {}

    return dest;
}

int main()
{
    char p1[]="qwer";
    char p2[]="asdf";
    printf("%s\n",Strcat(p1,p2));
    return 0;
}
