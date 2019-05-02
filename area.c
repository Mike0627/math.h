#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    int a=0;
    int b=0;
    int h=0;
    char unknown [8];
    
    printf("What is the missing variable for the area of a parallelogram? (A, B, or H)?\n");
    scanf("%c",unknown);
    
    if (*unknown == 'A'){
        b=get_int("Enter base of parallelogram:\n");
        h=get_int("Enter height of parallelogram:\n");
        printf("%f\n", (float) b*h);
        }
     else if(*unknown == 'B'){
         a=get_int("Enter area of parallelogram:\n");
         h=get_int("Enter height of parallelogram:\n");
         printf("%f\n", (float) a/h);
         }
    else if(*unknown == 'H'){
        a=get_int("Enter area of parallelogram:\n");
        b=get_int("Enter base of parallelogram:\n");
        printf("%f\n", (float) a/b);
        }
    }
         
         
    
