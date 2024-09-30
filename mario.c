#include<stdio.h>

void print_row(int total_height, int row_length);

int main(void)
{
    // Ask for height of the pyramid
    int height;
    printf("Height: ");
    scanf("%i", &height);

    // Loop through each row
    for (int j = 1; j <= height; j++) {
        print_row(height, j);
    }
}

void print_row(int total_height, int row_length)
{
    // Print leading spaces
    for (int i = 0; i < total_height - row_length; i++) {
        printf(" ");
    }

    // Print hashes (#)
    for (int i = 0; i < row_length; i++) {
        printf("#");
    }

    // Move to the next line
    printf("\n");
}
