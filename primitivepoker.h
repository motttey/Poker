//primitivepoker.h

#ifndef _PRIMITIVE_POKER_
#define _PRIMITIVE_POKER_


#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52
#define HAND 5 

void shuffle( unsigned int wDeck[][ FACES ] );
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], const char *wSuit[]); 

#endif