#include"Minesweeper.h"

int main()
{
    srand((unsigned)time(NULL));        //随机数种子产生
    int a;
    do
    {
        meun();
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            printf("输入错误\n");
            system("cls");
            break;
        }
    } while (a);
    return 0;
}
