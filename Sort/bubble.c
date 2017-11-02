/*************************************************************************
	> File Name: bubble.c
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Nov 2017 07:54:33 AM PDT
 ************************************************************************/

#include<stdio.h>

void bubblesort(int* data,int size)
{
    int i,j;
    for(i=0;i<size-2;i++)
    {
        for(j=0;j<size-2-i;j++)
        {
            if(data[j]>data[j+1])
            {
                int tmp=data[j];
                data[j]=data[j+1];
                data[j+1]=tmp;
            }
        }
    }
}

int main()
{
    int data[]={9,8,6,7,5,4,2,3,1,0};
    bubblesort(data,sizeof(data)/sizeof(data[0]));
    int i=0;
    for(i;i<sizeof(data)/sizeof(data[0])-1;i++)
    {
        printf("%d ",data[i]);
    }
    return 0;
}
