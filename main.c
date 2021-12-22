#define TXT 1024
#define WORD 30
#include <stdio.h>
#include <string.h>
#include "function.h"


char txt[TXT];
char word[WORD];

char ch;




int main(){


printf("enter your word: ");
scanf("%s", word);

int i=0;
printf("enter your text: ");
while( ch!='~'){
scanf(" %c",&ch);
txt[i]=ch;
i++;}


    function1(word,txt);
    // function2(word,txt);
    function3(word,txt);

    
    return 0;
}