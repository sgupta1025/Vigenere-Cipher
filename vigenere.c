/*
Samir Gupta
CS50 AP
Period 3
PSET2
vigenere
*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>

int main(int argc, string argv[]){
    if(argc != 2){
      printf("NOPE!\n");
      return 1;  
    } 
    else{
    char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    string keyword = argv[1];
    string input = scanf(“%s”);
    char result[strlen(input)];
     for(int i =0; i < strlen(input); i++){
         char keyToInt = keyword[i%strlen(keyword)];
        
            if(input[i] >= 65 && input[i] <=91){
            int key =strcspn(upper, &keyToInt) + 1;
              result[i] =(((input[i]-65) + key) % 26 ) + 65;
          }
          if(input[i] >= 97 && input[i] <=122){
              int key =strcspn(lower, &keyToInt);
              result[i]  =(((input[i]-97) +key ) % 26) + 97;
          }
          
          if(isblank(input[i])){
              result[i] = input[i];
          }
          if(ispunct(input[i])){
              result[i] = input[i];
          }
           
            
        }
        printf("%s", result);
        printf("\n");
         
     }
}