#include <stdio.h>
int main(){
    int limit;
    printf("Enter the integer N to be counted to: ");
    scanf("%i", &limit);
    for(int count=1; count <= limit; count++){
        printf("%i\n", count);
    }
    return 0;
}