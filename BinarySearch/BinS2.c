/*************************************************************************
	> File Name: BinS2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Oct 2017 09:15:05 PM PDT
 ************************************************************************/

#include<stdio.h>


int Binsearch(const int* ptr,const int key,const int size)
{
    int left=0;
    int right=size;

    while(left<right)
    {
        int mid=((right-left)>>1)+left;

        if(ptr[mid]>key)
        {
            right=mid;
        }

        else if(ptr[mid]<key)
        {
            left=mid+1;
        }

        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int data[]={1,3,5,7,8,9,12,34,67,78,133,134,150};
    printf("%d\n",Binsearch(data,4,sizeof(data)/sizeof(data[0])));
    printf("%d\n",Binsearch(data,1,sizeof(data)/sizeof(data[0])));
    printf("%d\n",Binsearch(data,12,sizeof(data)/sizeof(data[0])));
    printf("%d\n",Binsearch(data,34,sizeof(data)/sizeof(data[0])));
    printf("%d\n",Binsearch(data,150,sizeof(data)/sizeof(data[0])));
    return 0;
}
