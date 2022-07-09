//
//  main.c
//  0223
//
//  Created by Taehong on 2021-02-23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    char strData[10][80];
//    printf("Enter string: ");
//    for (int i=0; i<10; ++i) {
//        scanf("%s", strData[i]);
//    }
//    for (int i=0; i<10; ++i) {
//        printf("%d: [%s]\n", i+1, strData[i]);
//    }
    
//    char eightItems[8][80];
//    double cost[8];
//
//    for (int i=0; i<8; ++i) {
//        printf("Enter Budget item %d: ", i+1);
//        scanf("%s", eightItems[i]);
//        printf("How much does %s cost? ", eightItems[i]);
//        scanf(" %lf", &cost[i]);
//    }
//
//
//
//    for (int i=0; i<8; ++i) {
//        printf("Your item %d is: %s and it costs: %.2lf\n", i+1,eightItems[i], cost[i]);
//    }
    
    // Solution of my teacher
    char items[8][40];
    double costs[8];
    
    for (int i=0; i<8; ++i) {
        printf("Budget item %d: ", i+1);
        scanf("%s", items[i]);
        printf("How much is %s? ", items[i]);
        scanf("%lf", &costs[i]);
    }

    printf("My budget\n");
    for (int i=0; i<8; ++i) {
        printf("#%02d - %-12s - %6.2lf\n", i+1, items[i], costs[i]);
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
