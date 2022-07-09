//
//  main.c
//  0323
//
//  Created by Taehong on 2021-03-23.
//

#include <stdio.h>

void printffunction(int *a){
    printf("a=%d\n", *a);
    *a=11;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int fingers=5;
    int *digits;
    
    digits = &fingers;
    
    printf("fingers = %d\n", fingers);
    printf("digits = %d\n", *digits);
    *digits = 6;
    printf("fingers again = %d\n", fingers);
    
    int scores[] = {10,20,30,40};
    
    printf("scores0 = %d\n", *scores);
    printf("scores1 = %d\n", *scores+1);
    printf("scores2 = %d\n", *(scores+sizeof(int)*2));
    printf("scores3 = %d\n", *(scores+sizeof(int)*3));
    
    printf("scores0 = %d\n", scores[0]);
    printf("scores1 = %d\n", scores[1]);
    printf("scores2 = %d\n", scores[2]);
    printf("scores3 = %d\n", scores[3]);
    
//    printffunction(scores[0]);
//    printf("%d\n", scores[0]);
    
    int b=20;
    printffunction(&b);
    printf("b=%d\n",b);
}






