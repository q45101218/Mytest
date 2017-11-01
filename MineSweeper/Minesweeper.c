#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"Minesweeper.h"
void game()                                 
{
    printf("--------------------------------------------------------------------\n");
    Set();                                 
    char mine[10][10];                    
    memset(mine, ' ', sizeof(mine));         //对雷区进行初始化
    int i = 0;
    while (i < 10)
    {
        int x = rand() % 10 ;               //随机数的接受（产生0-9的随机数）
        int y = rand() % 10 ;
        if (mine[y][x] == ' ')              //布置地雷（不能重复） 
        {
            mine[y][x] = 'X';
            i++;
        }
    }
    //Map(mine);                            //雷区的显示
    Judgement(mine);                        //输赢的判断
}

//游戏界面
void meun()                               
{
    printf("*************************************************************\n");
    printf("************       Welcome to Minesweeper      **************\n");
    printf("*************************************************************\n");
    printf("************      -       1. Play        -     **************\n");
    printf("************      -       0. Exit        -     **************\n");
    printf("*************************************************************\n");
}


//游戏地图的初始化
void Set()                                  
{
    char set[10][10];
    memset(set, '*', sizeof(set));
    Map(set);
}



//打印地图
void Map(char m[10][10])                  
{
    int i, j;
    printf("\n\n");
    for (j = 1; j < 11; j++)
    {
        if (j == 1)
            printf("  ");
        printf("%3d", j);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("%2d", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("%3c", m[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n--------------------------------------------------------------------\n");
}


//对安全区的扩展
void Extend(char a[10][10], char set[10][10], int x, int y)  
{
    if ((a[y - 1][x - 1] != 'X') && (a[y - 1][x] != 'X') &&
        (a[y - 1][x + 1] != 'X') && (a[y][x + 1] != 'X') &&
        (a[y][x - 1] != 'X') && (a[y + 1][x] != 'X') &&
        (a[y + 1][x + 1] != 'X') && (a[y + 1][x - 1] != 'X'))
    {
        if ((x - 1 > -1) && ((y - 1) > -1) && (a[y - 1][x - 1] ==' ') && (set[y - 1][x - 1] != ' '))
        {
            set[y - 1][x - 1] = ' ';
            char ret1 = Discorn(a, x - 1, y - 1);
            if (ret1 == '0')
                ret1 = ' ';
            else
                set[y - 1][x - 1] = ret1;
            Extend(a, set, x - 1, y - 1);
        }
        if (((x - 1) > -1) && (y < 10) && (y>-1) && (a[y][x - 1] == ' ') && (set[y][x - 1] != ' '))
        {
            set[y][x - 1] = ' ';
            char ret2 = Discorn(a, x - 1, y);
            if (ret2 == '0')
                ret2 = ' ';
            else
                set[y][x - 1] = ret2;
            Extend(a, set, x - 1, y);
        }
        if ((x - 1 >-1) && (y + 1< 10) && (a[y + 1][x - 1] == ' ') && (set[y + 1][x - 1] != ' '))
        {
            set[y + 1][x - 1] = ' ';
            char ret3 = Discorn(a, x - 1, y + 1);
            if (ret3 == '0')
                ret3 = ' ';
            else
                set[y + 1][x - 1] = ret3;
            Extend(a, set, x - 1, y + 1);
        }
        if ((x>-1) && (x < 10) && (y + 1 < 10) && (a[y + 1][x] == ' ') && (set[y + 1][x] != ' '))
        {
            set[y + 1][x] = ' ';
            char ret4 = Discorn(a, x, y + 1);
            if (ret4 == '0')
                ret4 = ' ';
            else
                set[y + 1][x] = ret4;
            Extend(a, set, x, y + 1);
        }
        if ((x>-1) && (x < 10) && (y - 1>-1) && (a[y - 1][x] == ' ') && (set[y - 1][x] != ' '))
        {
            set[y - 1][x] = ' ';
            char ret5 = Discorn(a, x, y - 1);
            if (ret5 == '0')
                ret5 = ' ';
            else
                set[y - 1][x] = ret5;
            Extend(a, set, x, y - 1);
        }
        if ((x + 1 < 10) && (y - 1 >-1) && (a[y - 1][x + 1] == ' ') && (set[y - 1][x + 1] != ' '))
        {
            set[y - 1][x + 1] = ' ';
            char ret6 = Discorn(a, x + 1, y - 1);
            if (ret6 == '0')
                ret6 = ' ';
            else
                set[y - 1][x + 1] = ret6;
            Extend(a, set, x + 1, y - 1);
        }
        if ((x + 1 < 10) && (y<10) && (y>-1) && (a[y][x + 1] == ' ') && (set[y][x + 1] != ' '))
        {
            set[y][x + 1] = ' ';
            char ret7 = Discorn(a, x + 1, y);
            if (ret7 == '0')
                ret7 = ' ';
            else
                set[y][x + 1] = ret7;
            Extend(a, set, x + 1, y);
        }
        if ((x + 1 < 10) && ((y + 1) < 10) && (a[y + 1][x + 1] == ' ') && (set[y + 1][x + 1]))
        {
            set[y + 1][x + 1] = ' ';
            char ret8 = Discorn(a, x + 1, y + 1);
            if (ret8 == '0')
                ret8 = ' ';
            else
                set[y + 1][x + 1] = ret8;
            Extend(a, set, x + 1, y + 1);
        }
    }
}

//对周围雷数进行统计
char Discorn(char a[10][10], int x, int y)
{
    char count = '0';
    if (((x - 1) > -1) && ((y - 1) > -1) && (a[y - 1][x - 1] == 'X'))
        count++;
    if (((x - 1) > -1) && (y < 10) && (y>-1) && (a[y][x - 1] == 'X'))
        count++;
    if (((x - 1) > -1) && ((y + 1) < 10) && (a[y + 1][x - 1] == 'X'))
        count++;
    if ((x>-1) && (x < 10) && ((y + 1) < 10) && (a[y + 1][x] == 'X'))
        count++;
    if ((x>-1) && (x < 10) && ((y - 1)>-1) && (a[y - 1][x] == 'X'))
        count++;
    if (((x + 1) < 10) && ((y - 1) >-1) && (a[y - 1][x + 1] == 'X'))
        count++;
    if (((x + 1) < 10) && (y<10) && (y>-1) && (a[y][x + 1] == 'X'))
        count++;
    if (((x + 1) < 10) && ((y + 1) < 10) && (a[y + 1][x + 1] == 'X'))
        count++;
    return count;
}


//判断输赢
void Judgement(char a[10][10])
{
    int x, y;
    char set[10][10];
    memset(set, '*', sizeof(set));
    while (1)
    {
        int count = 0;
        printf("input coordinate:");
        scanf("%d %d", &x, &y);
        system("cls");                              //对屏幕的刷新
        if (x > 10 || y > 10 || x < 0 || y < 0)
        {
            printf("Please again!!!\n");
            continue;
        }
        x = x - 1;
        y = y - 1;
        if (a[y][x] == 'X')
        {
            Map(a);
            printf("you were dead!!!\n");
            break;
        }
        else
        {

            char ret = Discorn(a, x, y);
            if (ret == '0')
                ret = ' ';
            set[y][x] = ret;
            Extend(a, set, x, y);
            Map(set);
            int i,j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 10; j++)
                if (set[i][j] == '*')
                    count++;
            }
        }
        if (count == 10)
        {
            printf("You win this game!!!\n");
            break;
        }
    }
}
