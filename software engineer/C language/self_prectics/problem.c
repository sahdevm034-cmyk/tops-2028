
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Helper function to check if word contains 'love' in case-insenstive way
int containsLove(const char *str){
    char lowerstr[100];
    int i;
    for (i =0;str[i] !='\0'; i++){
        lowerstr[i] = tolower(str[i]);
    }
    lowerstr[i] ='\0';

    return strstr(lowerstr,"love") !=NULL;

}
void main(){
    FILE *file = fopen("playlist.txt","r");
    char song[100];

    if (file == NULL){
        printf("Erroe opening file!\n");
 
    }
    printf("songs containing the word 'love':\n");
    while (fgets(song, sizeof(song),file) != NULL){
        if (containsLove(song)){
            printf("%s",song);
        }
    }
    fclose(file);

}















