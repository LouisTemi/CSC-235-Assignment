#include <stdio.h>

int main()
{
    char name[3];
    printf("Enter your name: ");
    scanf("%[^\n]s", name);     
    printf("Hello World %s", name);  
    return 0;
}
