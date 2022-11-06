#include <stdio.h>
int main(){
    int i;
    char name[10][50];
    for (i=1; i<11; i++){
        printf("Name %i: ", i);
        scanf("%s", &name[i -1]);
    }
     printf("The names are: ");
    for(int count=0; count < 9; count++){
        printf("\n%s ", name[count]);
    }
    printf("%s.", name[9]);
    return 0;
}