#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize);

int main () {
    char licensePlate[] = "1s3 PSt";
    char *words[15] = {"step", "steps", "stripe", "stepple"};

    shortestCompletingWord(licensePlate, words, sizeof(words) / sizeof(words[0]));
}

char * shortestCompletingWord(char * licensePlate, char ** words, int wordsSize){

    for (int i = 0; i < wordsSize; i++) {
        for (int j = 0; j < sizeof(licensePlate) / sizeof(char); j++) {
            int c = 0;

            for (int i2 = 0; i2 < strlen(words[i]); i2++) {
                if (tolower(licensePlate[j]) == words[i][i2]) {
                    c++;
                } else if (licensePlate[j] != ' ' || !isdigit(licensePlate[j])) {
                    i++;
                    j = 0;
                    break;
                }
                if (c == strlen(words[i])) {
                    printf("%s\n", words[i]);
                    return words[i];
                }
            }
        }
    }

    return ' ';
}