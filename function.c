#define TXT 256
#define WORD 30
#include <stdio.h>
#include <string.h>
#include "function.h"

char txt[TXT];
char word[WORD];

char ch;



int genatrichar(char c){
    int genatrichar=0;
    int a=1-'a';
    int A=1-'A';
    if((c>='A')&(c<='Z')){
        genatrichar=c+A;
    }
    if((c>='a')&(c<='z')){
        genatrichar=c+a;
    }
    else{
        genatrichar=0;
    }
    return genatrichar;
}



int culc( char str []){
    int size = strlen(str);
    int sum=0;
    for(int i=0;i<size;i++){
    sum=sum+genatrichar(str[i]);
 } return sum;
}



void function1 (char a[],char b []){
    int sum=culc(a);
    int size = strlen(b);
    char c[TXT];
    int h=0;


    for(int i=0;i<size;i++ ){
         c[0]=b[i];
         
         int mc=1;
         int ans=genatrichar(b[i]);
         
         int m=0;
            
         for(int j = i+1 ;j<=size;j++){
             m++;
            int va=genatrichar(b[j]);

            if(ans+va>sum){
            break;}
            
            if(ans+va<=sum){
            ans=ans+va;
            c[mc]=b[j];
            mc++;}
            
            if(ans==sum){
            c[mc]=b[j];
            if(h>0){printf("~");}
            h++; 
            for(int t=0;t<=m;t++){
            putchar(c[t]);}

            break;}
                    }


         }
     }
    

int ifcharin (char c, char str[]){
  int j=strlen(str);
  int flag = 0;
  for (int i = 0; i < j; i++){
      if (c == str[i]){
	  flag = 1;}
      }
  return flag;
}

int charin (char c, char str[]){
  int flag;
   int j=strlen(str);
  for (int i = 0; i < j; i++){
      if (c == str[i])	{
	  flag = i;
	  	}
	  }return flag;
}


void zero(int c[],int len){
   for (int j = 0; j < len; j++) {
        (c[j]=0);}
}


int doune(int a [],int len){
    int flag=-1;
    for (int j = 0; j < len; j++) {
        if(a[j]==0){
            flag=0;}
        }
        return flag;
}



void function3 (char a[], char b[]){

  int lentext = strlen (b);
  int lenword = strlen (a);


 char ans[WORD];
 int c [lenword];
 zero(c,lenword);
  

 int p = 0;
 int h = 0;
		 
  for (int i = 0; i < lentext; i++) {
      if (b[i] == ' '){
	  ans[p] = b[i];
	  p++;}
    else if (ifcharin (b[i], a)== 1){

      int m=charin (b[i], a);

      if(c[m]==0){
      ans[p] = b[i];
	  p++;
      c[m]=-1;

      int flag=doune(c,lenword);
      if(flag!=0){     
         if(h>0){printf("~");}
          h++;
     for (int t = 0; t <= p ; t++){
          putchar (ans[t] );}
          p=0;
          zero(c,lenword);
          
      }
          
         }    
      }else  {  zero(c,lenword);
      p=0;
}
  
       
          
      }}

  
       
          
    
