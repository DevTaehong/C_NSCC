//
//  main.c
//  0209
//
//  Created by Taehong on 2021-02-09.
//

#include <stdio.h>

int main(int ac, char **av) {
    // insert code here...
    char str[] = "Hello world";
    
    printf("[%s]\n", str);
    
    int iArr[] = {1, 2, 3, 4, 5, 6, 7};
    
    for (int w=0; w<7; ++w) {
        printf("[%x]\n", iArr[w]);
    }
    printf("\n");
    
    double dArr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    
    for (int w=0; w<7; ++w) {
        printf("[%lf]", dArr[w]);
    }
    printf("\n");
    
    char cArr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '\0'};
    
    for (int w=0; w<7; ++w) {
        printf("[%c]", cArr[w]);
    }
    printf("\n");
    printf("%s\n", cArr);
    
    //Create a short C program that will accept 10 integer values from the keyboard and store them in an integer array. After you've ccollected them all, print them out.
//    int iarr[10];
//    for (int w=0; w<10; w++) {
//        printf("Enter 10 integer values: ");
//        scanf("%d", &iarr[w]);
//    }
//
//    for (int i=0; i<10; i++) {
//        printf("%d\n", iarr[i]);
//    }
    
    // Teacher solution
    int data[10];

    printf("Enter numbers: ");
    for (int i=0; i<10; ++i) {
        scanf("%d", &data[i]);
    }

    for (int i=0; i<10; ++i) {
        printf("data[%d] is [%d]\n", i, data[i]);
    }

}
