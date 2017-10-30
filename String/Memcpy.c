/*************************************************************************
	> File Name: Memcpy.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2017 08:56:13 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
void* Memcpy(void* det,const void* src,int len)
{
    assert(det);
    assert(src);
    char* p=(char*)det;
    char* q=(char*)src;

    while(len--)
    {
        *p++=*q++;
    }
    return det;
}

int main()
{
    char p[]="woshihahaha";
    char* ptr=Memcpy(p,"hello world",12);
    printf("%s\n",ptr);
    return 0;
}
