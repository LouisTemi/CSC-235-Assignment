#include <stdio.h>
#include <string.h>
int main() {
  
        char string[100], reverse_string[100];
        int old;
        printf("\n Enter the string to be reversed: ");
        scanf("%[^\n]s", string);

        old = strlen(string) - 1;
        for (int new = 0; new < strlen(string); new++) {
                reverse_string[new] = string[old];
                old--;
        }

        printf("\n Reversed String = %s", reverse_string);
        return 0;
}