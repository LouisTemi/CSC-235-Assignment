#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *file;
    file = fopen("adam.in", "r");
    int num;
    int i=0;
     
    fscanf(file, "%i", &num);
    int list[num];
    char tests[100];
    int counter = 1;
    while(fgets(tests, 100, file)){
        tests[strcspn(tests, "\r\n")] = '\0';
        if(counter >=2){
            int steps =0;
            
            for(int count=0; count<strlen(tests); count++){
                if(tests[count] == 'U'){
                    steps++;
                }
                else{
                    break;
                }
            }
            
            list[i] = steps;
            printf("%i\n", steps);
            i++;
        }
        counter++;
    }
    fclose(file);
    return 0;
}