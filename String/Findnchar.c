/*************************************************************************
	> File Name: Findnchar.c
	> Author: 
	> Mail: 
	> Created Time: Thu 26 Oct 2017 05:44:21 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<assert.h>

char Findnchar(const char* str,const int n)
{
    assert(str);
    int array[256]={0};
    int i=0;
    for(i;i<strlen(str);i++)
    {
        array[str[i]]++;
    }

    for(i=0;i<strlen(str);i++)
    {
        if(array[str[i]]==n)
        {
            return str[i];
        }
    }
    printf("not find!");
    return;
}
int main()
{
    char arr[]="asdfghdffsgsgkkklcdderb";
    int n;
    printf("Find n number:");
    scanf("%d",&n);
    printf("%c\n",Findnchar(arr,n));
    return 0;
}
