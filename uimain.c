#include <stdio.h>
#include "draw.h"

int main() {
    puts("Welcome!");

    while (1) { // Infinite while loop                                                                                                                                                                      
        fputs("Select which shape you want to print (Triangle = t, Square = s, Arrow = a, Chars = c) or 'q' to quit\n> ", stdout);
        fflush(stdout);
        int c;
        while ((c = getchar()) == '\n');
        if (c == EOF)
            break;

        switch (c) {
        case 't':
            puts("You selected triangle:");
            print_triangle(5, 7);
            break;
        case 's':
            puts("You selected square:");
            print_square(5, 5);
            break;
        case 'a':
            puts("You selected arrow:");
            print_arrow(5, 5);
            break;
        case 'c':
            puts("You selected chars:");
            for (char ch = 'a'; ch <= 'd'; ch++)
                print_char_11x16(ch); // Updated for 11x16 font
            break;
        case 'q':
            puts("Bye!");
            return 0;
        default:
            printf("Unrecognized option '%c', please try again!\n", c);
        }
    }

    return 0;
}

