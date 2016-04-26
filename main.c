//main.c
//include three headers (primitivepoker.h, checkhand.h and sort.h)
#include "primitivepoker.h"
#include "checkhand.h"
#include "sort.h"

int main ( void ){

	const char *suit[ SUITS ] = { "Hearts", "Diamonds", "Clubs", "Spades" };	
	//initialize suit(row) array
	const char *face[ FACES ] = { "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" ,"Ace"};	
	//initialize face(column) array.( In conformity with real poker rule, array starting from Deuce )

	unsigned int deck[ SUITS ][ FACES ] = { 0 };
	srand( time(NULL) );	//seed random-number generator

	shuffle( deck );	//shuffle the deck

	printf("Dealed cards are ...\n\n");

	deal( deck, face, suit );	//deal the deck

}