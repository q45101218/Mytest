/*************************************************************************
	> File Name: Strrchr.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2017 06:13:09 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
#include<string.h>
char* Strrchr(char* str,char s)
{
    char* p=str+strlen(str);
    while(str!=p)
    {
        if(*p==s)
            return p;
        p--;
    }
    if(*str==s)
        return str;
    return NULL;
}

int main()
{
    char p[]="aasdfsdfasdf";
    char* s=Strrchr(p,'a');
    printf("%c\n",*s);
    return 0;
}
