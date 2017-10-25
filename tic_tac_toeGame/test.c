/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Oct 2017 01:00:30 AM PDT
 ************************************************************************/

#include"game.h"

int main()
{
    int a;
    srand((unsigned)time(NULL));
    do
    {
        meun();
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            game();
            break;
            case 0:
            break;
            default:
            printf("input error,try again:");
            setbuf(stdin,NULL);
            break;
        }
    }while(a);

    return 0;
}

