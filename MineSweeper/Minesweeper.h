#ifndef __Minesweeper_H__

#define __Minesweeper_H__


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

extern void meun();
extern void Map(char a[][10]);
extern char Discorn(char a[][10],int x,int y);
extern void Extend(char a[][10], char b[][10],int x,int y);
extern void Judgement(char a[][10]);
extern void Set();
extern void game();


#endif 
