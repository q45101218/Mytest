/*************************************************************************
	> File Name: tic_tac_toe.c
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Oct 2017 01:00:14 AM PDT
 ************************************************************************/

#include"tic_tac_toe.h"

//游戏菜单设置
void meun()
{
    printf("************************************************\n");
    printf("**************     1.play     ******************\n");
    printf("**************     2.exits    ******************\n");
    printf("************************************************\n");
}

//游戏主程序
void game()
{
    printf("------------------welcome!!!--------------------\n");
    char arr[3][3];
    memset(arr, ' ', sizeof(arr));                      //对数组进行初始化
    chessBorad(arr);
    while (1)
    {
        Computer_Set(arr);
        int judge = Judgement(arr);                     //每次都要进行判断
        if (judge == 0)
        {
            system("clear");                              //清空屏幕进行下一次游戏
            break; 
        }
        Person_Set(arr);
        judge = Judgement(arr);
        if (judge == 0)
        {
            system("clear");
            break;
        }
    }
}

//游戏棋盘的设置，注意数组要安置在棋盘里
void chessBorad(char arr[3][3])
{
    int i,j;
    for (i = 0; i < 4; i++)
    {
        if (i == 0)
            printf("\n");
        if (i>0)
        for (j = 0; j < 1; j++)
        {
            printf("              | %c | %c | %c |\n", arr[i - 1][j], arr[i - 1][j + 1], arr[i - 1][j + 2]);
        }
        printf("               --- --- ---\n");

    }
    printf("_________________________________________________\n");
}

//电脑安置棋子设置，用随机数的产生来设置
void Computer_Set(char arr[3][3])
{
    printf("computer seted:");
    while (1)
    {
        int a = rand() % 3;
        int b = rand() % 3;
        if (arr[a][b] == ' ')
        {
            arr[a][b] = 'O';
            break;
        }
    }
    chessBorad(arr);
}

//玩家放置棋子设置
void Person_Set(char arr[3][3]) 
{
    while (1)
    {
        printf("please input coordinate:");
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);
        a--;
        b--;
        if (((a >= 0) && (a<3)) && ((b >= 0) && (b < 3)) && (arr[a][b] == ' '))
        {
            arr[a][b] = 'X';
            chessBorad(arr);
            break;
        }
        else
        {
            setbuf(stdin,NULL);
            printf("please try again;\n");
        }
    }
}

//胜负的判断条件
int Judgement(char arr[3][3])
{
    if (((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2]) && (arr[0][0] == 'X')) ||
        ((arr[1][0] == arr[1][1]) && (arr[1][1] == arr[1][2]) && (arr[1][1] == 'X')) ||
        ((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2]) && (arr[2][2] == 'X')) ||
        ((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0]) && (arr[2][0] == 'X')) ||
        ((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1]) && (arr[2][1] == 'X')) ||
        ((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2]) && (arr[2][2] == 'X')) ||
        ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[2][2] == 'X')) ||
        ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[2][0] == 'X')))
    {
        printf("you win this game.\n");
        return 0;
    }
    if (((arr[0][0] == arr[0][1]) && (arr[0][1] == arr[0][2]) && (arr[0][0] == 'O')) ||
        ((arr[1][0] == arr[1][1]) && (arr[1][1] == arr[1][2]) && (arr[1][1] == 'O')) ||
        ((arr[2][0] == arr[2][1]) && (arr[2][1] == arr[2][2]) && (arr[2][2] == 'O')) ||
        ((arr[0][0] == arr[1][0]) && (arr[1][0] == arr[2][0]) && (arr[2][0] == 'O')) ||
        ((arr[0][1] == arr[1][1]) && (arr[1][1] == arr[2][1]) && (arr[2][1] == 'O')) ||
        ((arr[0][2] == arr[1][2]) && (arr[1][2] == arr[2][2]) && (arr[2][2] == 'O')) ||
        ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[2][2] == 'O')) ||
        ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && (arr[2][0] == 'O')))
    {
        printf("you lose this game.\n");
        return 0;
    }
    if ((arr[1][1] != ' ') && (arr[1][2] != ' ') && (arr[1][3] != ' ')
        && (arr[2][1] != ' ') && (arr[2][2] != ' ') && (arr[2][3] != ' ')
        && (arr[3][1] != ' ') && (arr[3][2] != ' ') && (arr[3][3] != ' '))
    {
        printf("draw!\n");
        return 0;
    }
    return  1;
}

