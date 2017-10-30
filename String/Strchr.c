/*************************************************************************
	> File Name: Strchr.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2017 06:01:34 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
const char* Strchr(const char* str,const char s)
{
    assert(str);
    while(*str++)
    {
        if(*str==s)
        return str;
    }
    return NULL;
}

int main()
{
    char s[]="abcdefasdc";
    const char* p=Strchr(s,'d');
    printf("%c\n",*p);
    return 0;
}
