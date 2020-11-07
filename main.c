#include <stdio.h>
#include <stdlib.h>
int main(void) {
    
    int wordAmount = 0;
    int wordSize = 0;
    
   
    //memset(wordList, "", 1);

    printf("How many words do you want? \n");
    scanf("%i",&wordAmount);

    char ** wordList = (char **) malloc(sizeof(char *)*(wordAmount+1));
    
    for(int i = 0; i<wordAmount;i++){
        printf("How big is your word gonna be?\n");
        scanf("%i", &wordSize);
       // char * tempWord;
        wordList[i] = malloc(sizeof(char)*wordSize+1);

        if(wordList[i] == NULL){
            printf("Realloc for the Word failed huh :( \n");
            return 1;
        }
        printf("Say a word!\n");
        scanf("%s", wordList[i]);
        printf("%s\n", wordList[i]);
        //printf("Debug Did we get here?");fflush(stdout);
    }


    for(int i = 0; i<wordAmount; i++){
        printf("%s",wordList[i]);
    }
    free(wordList);

    
  return 0;
}