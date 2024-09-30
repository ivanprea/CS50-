#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int score(string word);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main (void){


    string word1 = get_string("Player1: ");
    string word2 = get_string("Player2: ");

    int scoreP1 = score(word1);
    int scoreP2 = score(word2);


    //Print the winner
    if(scoreP1 > scoreP2){
        printf("Player 1 wins!");
        return 0;
    }else if(scoreP1 < scoreP2){
        printf("Player 2 wins!");
        return 0;
    }else{
        printf("Tie!\n");
        return 0;
    }
}



int score(string word){
    int sum = 0;
    for(int i = 0; i < strlen(word); i++)
        {

       if(isupper(word[i]))
       {
        sum = sum + points[word[i] - 'A'];
       }
       else if (islower(word[i]))
       {
        sum = sum + points[word[i] - 'a'];
       }
    }
   return sum;
}
