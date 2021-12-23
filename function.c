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
    else if((c>='a')&(c<='z')){
        genatrichar=c+a;
    }
    else if (c==' '){
        genatrichar=0;
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
        if(genatrichar(b[i])==0){
            continue;
        }
         c[0]=b[i];
         
         int mc=1;
         int ans=genatrichar(b[i]);
         
         int m=0;
            
         for(int j = i+1 ;j<=size;j++){

            if(ans==sum){
            c[mc]=b[j];
            if(h>0){printf("~");}
            h++; 
            for(int t=0;t<=m;t++){
            putchar(c[t]);}
            break;}
            
            
            int va=genatrichar(b[j]);

            if(ans+va>sum){
            break;}
            
            if(ans+va<=sum){

            ans=ans+va;
            c[mc]=b[j];
            mc++;
            m++;
            }
            
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

char* ret_atbash (char word []){
    char atbashWord [strlen (word)];
    for (int i = 0; i < strlen (word); i++){
        if (word [i] >= 'a' && word [i] <= 'z'){
            int atbashChar = 'z' - (int)(word[i]) + 'a';
            atbashWord [i] = (char)(atbashChar);
        }
        else if (word [i] >= 'A' && word [i] <= 'Z'){
            int atbashChar = 'Z' - (int)(word[i]) + 'A';
            atbashWord [i] = (char)(atbashChar);
        }
    }
    char* atbs_ptr=atbashWord;
    return atbs_ptr;
}

    void function2 (char word [], char txt []){
    int txtLen = strlen (txt);
    int wordLen = strlen (word);
    char* atBash = ret_atbash (word);
    int counter = 0;
    for (int i = 0;i<txtLen; i++){
        
        if (genatrichar (txt [i]) != 0 ){
                      //  printf ("%d", counter);      
                 if (txt [i] == atBash[0]){
               int ans = 1;
                int  j,k;
                for (j=i, k =0; k <wordLen; j++){
                   if(!isspace(txt[j]))
                 {   
                    if (txt [j] != atBash [k] ){
                        ans = 0;
                        break;
                        
                    }
                    
                    k++;
                  }
                 
                }
                if (ans==1)
                    {
                       //printf ("%d", counter); 
                if (counter != 0){
                    printf("~");
                    
                }
               
               for (int m = i; m < j; m++){
                   
                   printf ("%c", txt [m]);
                    
               }
                counter++;
            }
            }
            if (txt [i] == atBash [strlen(atBash)-1]){
              
              int ans = 1;
                int p,c;
                for (p = i, c = wordLen-1; c>=0; p++){
                    if(!isspace(txt[p]))
                    {
                    if (txt [p] != atBash [c]){
                        ans = 0;
                        break;
                    }
                      c--;
                    }
                }
                if (ans == 1)
                   {
                if (counter!= 0){
                   
                    printf("~");
                    
                }
                for (int t = i; t <p; t++){
                   
                    printf ("%c", txt [t]);
                }
                counter++;
                   }
                
            }
        }
    } 
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
    //   if (b[i] == ' '){
	//   ans[p] = b[i];
	//   p++;}
     if (ifcharin (b[i], a)== 1){

      int m=charin (b[i], a);

      if(c[m]==0){
      ans[p] = b[i];
	  p++;
      c[m]=-1;

      int flag=doune(c,lenword);
      if(flag!=0){     
         if(h>0){printf("~");}
          h++;
     for (int t = 0; t < p ; t++){
          putchar (ans[t] );}
          p=0;
          zero(c,lenword);
          
      }
          
         }    
      }else  {  zero(c,lenword);
      p=0;
}
  
       
          
      }}

  
       
          
    
