#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include "rand.h"
#define AMOUNT_WORDS 4
#define MAX_LENGTH 10
//Copyright Marcos D.Dedeu 2020 

// Welcome to Hanged in Terminal 
char* randomword(char** strings, int posiblewords){
	int chosenindex=randInt(0,posiblewords-1);
	char* word = strings[chosenindex];
}
char ask4letter(int n){
	char c;
	printf("\nYou have %d more chance%s:\n",n,(n==1)?"":"s");
	
	while(!isalpha(c=getchar())){
	printf("Write ONE letter: \n");
	}
	c=toupper(c); 
	return c; 
}
int checkstring(char*word, int c, int*check){
	// returns position found if found
	int atleast=-1;
	for( int i=0;word[i];i++){
		if(word[i]==c){
			check[i]=1;
			atleast=1; 
		}
	}
return atleast; }
void printstring(char*arr){
	for(int i=0;arr[i];i++){
		printf("%c",arr[i]);

	}
}
int asklevel(char* word){
	printf("Input 1 , 2 or 3 to select your level\n1.Easy\n2.Medium\n3.Hard\n\t\tChoose wisely\n");
	int level=0; 
	int chances=0; 
	int letters=strlen(word);
	do{
		level=getint("Input Level: ");
	}while(level<1 || level>3);

	if(level==1){
		chances= letters*2;
	}else if( level==2){
		chances=letters+letters/2;
	}else {
		chances= letters+letters/4;H
	}

}

int game(int n, char*word){
	int j; 
	int letterchosen;
	int count=0; 
	int win=strlen(word);
	int position=-1; 
	char aux[win];
	int *check;
	strcpy(aux,word); 
	for(j=0; j<win;j++){
		aux[j]='_';
		printf("%c",aux[j]);
	}
	aux[j]=0;
	while(n){
		check=calloc(win,sizeof(int));
		letterchosen=ask4letter(n--);
		position=checkstring(word,letterchosen,check);
		if(position!=-1){
			putchar('\n');
			for(int i=0; i<win; i++){
				if(check[i]){
					if(aux[i]!=letterchosen){
						aux[i]=letterchosen;
						count++;
					}
					
				}
			

			}

		}
		else
		{
			printf("Letter not found\n");
			
		}
		printstring(aux);
		free(check);
		if(count==win){
		return 1; 
	}
	}
		return 0; 
}


int main(){
	randomize();
	char**strings=malloc(AMOUNT_WORDS*sizeof(char)*MAX_LENGTH);
	strings[0]= malloc(strlen("ROCK")+1);
	strcpy(strings[0], "ROCK");
	strings[1]=malloc(strlen("HELLO")+1);
	strcpy(strings[1],"HELLO");
	strings[2]= malloc(strlen("WELCOME")+1);
	strcpy(strings[2],"WELCOME");
	strings[3]= malloc(strlen("LOVE")+1);
	strcpy(strings[3],"LOVE");

	char*word= randomword(strings,AMOUNT_WORDS);
	int n=asklevel(word); 

	printf("\nYou %s",(game(n,word)?"Win(finally)!!\n": "lose\n"));
	for(int i=0; i<AMOUNT_WORDS; i++){
		free(strings[i]);
	}
	
}