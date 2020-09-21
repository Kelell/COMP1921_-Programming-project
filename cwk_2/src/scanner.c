#include <string.h>
#include <stdlib.h>

#include "information.h"
#include "update.h"

//Reads the text input, strip it of punctuation and then saves the tokenised words
//in an array

profile scanner(char answer[200], int question, profile info) {

    char array[50][50+1];
    int i=0;


 char str[200] = "This will be replaced";
 answer[strcspn(answer, "\n")] = 0; //added to combat the use of fgets, as it addes a newline character to the string
 //strips the strings of puncuation
 answer[strcspn(answer, ",")] = 0;
 answer[strcspn(answer, ".")] = 0;
 answer[strcspn(answer, "?")] = 0;
 answer[strcspn(answer, "!")] = 0;
 strcpy(str, answer);
   const char s[2] = " ";
   char *token;

   //get the first token
   token = strtok(str, s);

   //repeat to get the other tokens
   while( token != NULL ) {
      strcpy(array[i], token);
      i++;
      token = strtok(NULL, s);
   }
   free(token);

    info=update(array, question, info);
    return info;
}
