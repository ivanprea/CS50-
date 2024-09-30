#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void shift(string text, int key);

int main (int argc, string argv[]){


    if(argc != 2){
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for(int i = 0; i < strlen(argv[1]); i++){
        if(!isdigit(argv[1][i])){
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    shift(plaintext, key);

}


void shift(string text, int key) {
    for (int i = 0; i < strlen(text); i++) {
        if (isupper(text[i])) {
            char new_char = 'A' + (text[i] - 'A' + key) % 26;
            printf("%c", new_char);
        } else if (islower(text[i])) {
            char new_char = 'a' + (text[i] - 'a' + key) % 26;
            printf("%c", new_char);
        } else {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}

