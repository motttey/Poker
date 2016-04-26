//primitivepoker.c
#include "primitivepoker.h"

void shuffle( unsigned int wDeck[][ FACES ] ){
	
	int row;	//row number
	int column;		//column number
	int card;	//counter

	for( card = 1; card <= CARDS; card++ ){
		//choose new random location
		do{
			row = rand() % SUITS;
			column = rand() % FACES;
		}while(wDeck[ row ][ column ] !=0 ); //end do...while statement condition 
		wDeck[ row ][ column ] = card;	//place card number
	}
}	//end function shuffle

//deal cards in deck
void deal( unsigned int wDeck[][ FACES ], const char *wFace[], const char *wSuit[]){

	int row;	//row number
	int column;		//column number
	int card;	//counter
	/*
	int checkcolumn[5]={1,2,3,4,5};
	int checkrow[5]={1,1,1,1,1};	//cheat initialization
	*/
	int checkcolumn[5];
	int checkrow[5];
	for( card = 1; card <= HAND; card++ ){ //deal each of cards
		for( row = 0; row <= SUITS; row++ ){
			for( column = 0; column < FACES; column++ ){
				if( wDeck[ row ][ column ] == card ){
					printf("%5s of %-8s \n", wFace[ column ], wSuit[ row ] );
					checkcolumn[ card - 1 ] = column;
					checkrow[ card - 1 ] = row;
				}
			}
		}
	}
	printf( "Hand is... \n\n" );
	printrank( checkcolumn, checkrow );
}	//end function deal
