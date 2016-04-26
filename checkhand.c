//checkhand.c
#include "checkhand.h"

void printrank(int c_column[], int c_row[]){

	if( checkflush( c_row ) == 1 && checkstraight( c_column ) == 1 ){
		sort( c_column );
		if( c_column[0] == 8 ){
			printf("royal_straight_flush"); 
			//if hands has flush and column is [Ten, Jack , Queen, King ,Ace], Hands has Royal Straight flush 
		}else{
			printf("straight_flush\n");	
			//if checkflush and checkstraight return 1,hands has Straight flush 
		}
	}else if( checkflush( c_row ) == 1 ){ 
			//if statement whether or not checkflush's return value is 1 
		printf("flush\n"); 
			//if condition is true, print statement means that hands has  flush
	}
	else if( checkstraight( c_column ) == 1 ){ 
			//if statement whether or not checkstraight's return value is 1 
		printf("straight\n");  
			//if condition is true, print statement means that hands has  straight
	}else{
		checkpair( c_column ); //check whether or not hands has pair
	}

}

int checkpair(int cards[]){

	int i, j;
	int pair = 0;

	for(i = 0; i < HAND; i++){ 
		for(j=i+1; j<HAND; j++){
			if( cards[i] == cards[j] ) //if hands has pairs
				pair++;	//incriment number of pairs
		}
	}
	switch( pair )
	{
		case 0:	//decision  whether or not no pair
			printf("no pair\n");
			break;

		case 1:	//decision  whether or not one pair
			printf("one pair\n");
			break;

		case 2:	//decision  whether or not two pair
			printf("two pair\n");
			break;

		case 3:	//decision  whether or not three card
			printf("three card\n");
			break;

		case 4:	//decision  whether or not full house
			printf("full house\n");
			break;

		case 6:	//decision  whether or not four card
			printf("four card\n");	
			break;

		default:
			break;
	}
}

int checkflush(int rows[]){

	int i;
	int flushcounter = 0; //initialize counter
	for(i = 1; i < HAND; i++){
		if(rows[i] == rows[0]){
           flushcounter++; //if two Suit(row) has same value, incliment flushcounter
		}
	}
	if(flushcounter == 4){ //if all card has same suit, return 1
		return 1;
	}else{ //else case, return 0
		return 0;
	}
}

int checkstraight(int cards[]){

    int i, j;
	sort(cards); //sort faces(column) 
	if( cards[4] - cards[0] == 4 ){
		//if interval from smallest value column  to largest value column is 4
		for( i = 0; i < 4; i++ ){
			if(cards[0] + i != cards[i]){ //if two card has same value, return 0
				return 0;
			}
		}
	}
	else if( cards[4] - cards[0] == 12 ){ 
		//Exeption handling :if Hand starting from Ace (Ex. Ace, Deuce, Three ,four, five)
		for(i=0; i<3; i++){
			if( cards[ i ] + 1 != cards[ i + 1 ]){
				return 0;
			}
		}
	}else{	//else case
		return 0;	//return 0;
	}
	return 1; //if condition is not false, return 1
}
