//checkhand.h
#ifndef _POKERHEAD_
#define _POKERHEAD_

#include<stdio.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5 

int checkpair( int cards[] );	
int checkflush( int rows[] );	
int checkstraight( int cards[] );	
void printrank( int c_column[], int c_row[] );

#endif