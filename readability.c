#include<cs50.h>
#include<ctype.h>
#include<math.h>
#include<stdio.h>
#include<string.h>

int counting_letters(string l_counter);
int counting_words(string words);
int counting_sentences(string phrase);

int main (void)
{
 string text = get_string("Text: ");

int letters = counting_letters(text);
int words = counting_words(text);
int sentences = counting_sentences(text);

float L = (float) letters / words * 100 ;
float S = (float) sentences / words * 100;

float index = 0.0588 * L - 0.296 * S - 15.8;

int rounded_index = (int)round(index);


int grade = rounded_index;

if(grade <= 1){
    printf("Before Grade 1\n");
    return 0;
}else if(grade >= 16){
    printf("Grade 16+\n");
    return 0;
}else{
    printf("Grade %i\n", grade);
    return 0;
}

}


// Counting numbers of letters in text - It does not counts special char or spaces
int counting_letters(string letters){
    int l_counter = 0;
    for(int i = 0; i < strlen(letters); i++){
       if(isupper(letters[i])){
        l_counter = l_counter + 1;
       }else if(islower(letters[i])){
        l_counter = l_counter + 1;
       }
    }
    return l_counter;
}


// Counting numbers of words in text
int counting_words(string words){
    int w_counter = 0;
    for(int i = 0; i < strlen(words); i++){
        if(words[i] == ' '){
        w_counter = w_counter + 1;
        }
    }
    return w_counter + 1;
}



//Counting sentences
int counting_sentences(string phrase){
    int p_counter = 0;
    for(int i = 0; i < strlen(phrase); i++){
        if(phrase[i] == '.' || phrase[i] == '?' || phrase[i] == '!'){
            p_counter = p_counter + 1;
        }
    }
    return p_counter;
}



