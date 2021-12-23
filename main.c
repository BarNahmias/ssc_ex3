#define TXT 256
#define WORD 30
#include <stdio.h>
#include <string.h>
#include "function.h"


char txt[TXT] ;
char word[WORD] ;

char ch;




int main(){


// printf("enter your word: ");
scanf("%s", word);

int i=0;
// printf("enter your text: ");
while( ch!='~'){
ch = getchar();
txt[i]=ch;
i++;}

    printf("Gematria Sequences: ");
    function1(word,txt);
    printf("\n");
    printf("Atbash Sequences: ");
    function2(word,txt);
    printf("\n");
    printf("Anagram Sequences: ");
    function3(word,txt);

    // char p;

    // scanf(" %c",& p);

    // printf("*");
    // putchar(p);
    // printf("*");



    
    return 0;
}