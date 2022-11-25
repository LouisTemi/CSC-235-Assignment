#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    //Opening the Self describing file
    FILE* SelfDescribing_file;
    SelfDescribing_file = fopen("selfdescribing.in", "r");

    int testcases;
    fscanf(SelfDescribing_file, "%d", &testcases);
   
    int number_array[1000];
    int count = 0;
    int len;
    char selfDescribing = 'T';

    for (int i=0; i<testcases; i++){
        char num[100];
        fscanf(SelfDescribing_file, "%s", num);
        // Getting the length of each testcase
        len = strlen(num);
        // Appending each character into an array
        for (int j = 0; j < len; j++) {
            number_array[j] = num[j] - '0';
        }
        for (int trial = 0; trial< len; trial++) {
            for (int i = 0; i< len; i++) {
                if(number_array[i] == trial) 
                count++;
            }
            if(count == number_array[trial]){
                selfDescribing = 'T';
            }
            else{
                selfDescribing = 'F';
                printf("Not self-describing\n");
                break;
            }
            count = 0;
            if (selfDescribing!= 'F'){
                printf("Self-describing\n");
                break;
            }
        }   
    }
    //Closing the opened file
    fclose(SelfDescribing_file);
    return 0;
}