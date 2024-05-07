#include <stdio.h>
#include <cs50.h>
void printRow(int numberOfBricks);

int main(void) {
    int height = get_int("Heigth: ");
    if(height <= 0) {
        main();
    }
    printRow(height);
}

void printRow(int numberOfBricks) {
  for (int row = 1; row <= numberOfBricks; row++) {
        for (int space = 0; space < numberOfBricks - row; space++) {
            printf(" ");
        }
        for (int hash = 0; hash < row; hash++) {
            printf("#");
        }
        printf("\n");
    }
}