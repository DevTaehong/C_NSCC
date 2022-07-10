//
//  main.c
//  PROG2004
//
//  Created by Taehong on 2021-01-28.
//

#include <stdio.h>

int main(int ac, char **av)
{
//    char firstName[] = "Taehong";
//    char lastName[] = "Min";
//    char month[] = "November";
//    int day = 23;
//    double kilos = 123.5232;
//
//    printf("I am %s %s and I was born on day %d of %s and I weigh %.1lfkgs\n", firstName, lastName, day, month, kilos);

    int i, i1, i2, i3;
    short s;
    long el;
    float f;
    double d;
    char c;
    char str[] = "Hello";

    el = 5000000;
    s = 63;
    i = 4;
    f = 3.14;
    d = 2.3754;
    c = 'z';

    printf("el is %ld\n", el);
    printf("s is %d\n", s);
    printf("i is %d\n", i);
    printf("f is %f\n", f);
    printf("d is %lf\n", d);
    printf("c is %c\n", c);
    printf("str is %s\n", str);

    printf("s is [%-6d], %d, %-6.2f, %c, \"%s\"\n", s, i, f, c, str);
    
    
    //Conditional
    if (i != 4){
        printf("i is 5\n");
    }
    else if (i==4){
        printf("i is 4\n");
    }
    else{
        printf("i is not 5\n");
    }
    
    //Lopping
    while (i>0) {
        printf("i = %d\n", i);
        i = i-1;
    }
    
    printf("\n");
    i=4;
    do{
        printf("i = %d\n", i);
        i = i-1;
    } while (i>0);
    
    printf("\n");
    for (i=6; i>0; i--) {
        printf("i = %d\n", i);
    }
    
    printf("\n");

    
    // create a C program that will print the following character sequence
    //"+-" 15 times, then print a new line. ex. +-+-+-+-+-+-
    
    
    // Using "for"
//    for(i=1; i<=15; i++){
//        printf("+-");
//    }
//    printf("\n");
//
    // While
//    i=0;
//    while (i<15) {
//        printf("+-");
//        i++;
//    }
//    printf("\n");


    // Create a C program that will draw a vertical line that is 12 character high. '|'
    
//    for (i=0; i<12; i++) {
//        printf("|\n");
//    }
//    printf("\n");
    
    // Create a C program that will draw a box that is 24 wide by 12 high.
//    int j = 1;
//    do {
//        for (i=0; i<24; i++) {
//                printf("#");
//            }
//            printf("\n");
//        j = j + 1;
//    } while(j<=12);
//
    //Solution
    int col=0;
    int row=0;
    
    
    
    for (row=0; row<12; ++row){
        for (col=0; col<24; ++col){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    
    
    
    
    
}
