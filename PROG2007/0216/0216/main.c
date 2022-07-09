//
//  main.c
//  0216
//
//  Created by Taehong on 2021-02-16.
//

#include <stdio.h>

void repeatChar(char character, int number){
    for (int i=0; i<number; i++) { // number = 6 (0 1 2 3 4 5 )
        printf("%c", character);
    }
}

int main(int ac, char **av) {
    //1. Write a C program that will prompt for and store: your favourite colour, your shoe size to the nearset whole number, and your height in meters.
    //2. Add a fucntion that will print a given character a given number of times on the same line. Use the fucntion to print '#' 15 times.
    //3. Using the repeatChar function draw a tree that is 6 levels.
    //        *
    //       ***
    //      *****
    //     *******
    //    *********
    //   ***********
    
//    char color[20];
//    int shoeSize;
//    double yourHeight;
//
//    printf("Enter your favourite colour: "); scanf("%s", color);
//    printf("Enter your shoe size: "); scanf("%d", &shoeSize);
//    printf("Enter your height in meters: "); scanf("%lf", &yourHeight);
//
//
//    printf("Your favourite colour is %s, your shoe size is %dmm and your height is %.2lfcm\n", color, shoeSize, yourHeight);
    
//    int nubmer = 15;
//    char character[20] = "#";
    
    int height;
    printf("Height of tree? ");
    scanf("%d", &height);
    
    //  인터넷 보고 내가 짜집기 한거...
//    for (int i=0; i<height; i++) {
//        for(int j=height-1; j>i; j--){
//            repeatChar(' ', 1);
//        }
//        for (int j=0; j<2*i+1; j++) {
//            repeatChar('*', 1);
//        }
//        printf("\n");
//    }
    // Teacher solution
    for (int i=0; i<height; ++i) {
        repeatChar(' ', height-i);
        repeatChar('*', (i*2)+1);
        printf("\n");
    }
    
    
    
    
}
