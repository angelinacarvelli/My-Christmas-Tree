#include <stdio.h>
#include <stdlib.h>

void print_christmas_tree(int size)
{
    if (size <= 0)
        return;

    int max_stars = 4 * size + 3;

    for (int i = 1; i <= size; i+=1) {
        int ligne = i + 3;
        int first_stars = 4 * i - 3;

        for (int j = 0; j < ligne; j+=1) {
            int stars = first_stars + 2 * j;
            int spaces = (max_stars - stars) / 2;

            for (int k = 0; k < spaces; k+=1)
                printf(" ");

            for (int k = 0; k < stars; k+=1)
                printf("*");

            printf("\n");
        }
    }

    int tronc_width = size;
    int tronc_height = size;
    int tronc_spaces = (max_stars - tronc_width) / 2;

    for (int i = 0; i < tronc_height; i+=1) {
        for (int j = 0; j < tronc_spaces; j+=1)
            printf(" ");

        for (int j = 0; j < tronc_width; j+=1)
            printf("|");

        printf("\n");
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return 0;

    int size = atoi(argv[1]);

    print_christmas_tree(size);

    return 0;
}