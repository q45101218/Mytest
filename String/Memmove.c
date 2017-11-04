/*************************************************************************
	> File Name: Memmove.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Oct 2017 09:43:28 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<assert.h>
void* Memmove(void* dst,const void* src,size_t size)
{
    assert(dst);
    assert(src);
    void* ret=dst;
    if(src>=dst||(char*)dst>=(char*)dst+size)
    {
        while(size--)
        *(char*)dst++=*(char*)src++;
    }
    else
    {
        src=(char*)src+size-1;
        dst=(char*)dst+size-1;
        while(size--)
        {
            *(char*)dst--=*(char*)src--;
        }
    }
    return ret;
}

int main()
{
    char p[20];
    printf("%s\n",(char*)Memmove(p,"hello world!",16));

    char p2[]="to battle for future.....!";
    printf("%s\n",(char*)Memmove(p2+15,p2+5,8));
    return 0;
}
