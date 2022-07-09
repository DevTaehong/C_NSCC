//
//  main.c
//  0309
//
//  Created by Taehong on 2021-03-09.
//

#include <stdio.h>
#include <string.h>
// Create a C program that will use gets and puts to ask for your first name,
// then last name, and then print out your full name.

// Create a C program that will convert a double
// from pounds to kilos or kilos to pounds depending on if there is a 'k' or 'l'. use getchar().

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    char first[50];
//    char last[50];
//    char fullname[100]="";
//
//    puts("Enter your first name:");
//    gets(first);
//
//    puts("Enter your last name:");
//    gets(last);
//
//    puts("Your full name is: ");
//    puts(first);
//    puts(last);
//
//    strcat(fullname, first);
//    strcat(fullname, " ");
//    strcat(fullname, last);
//    puts(fullname);
    
//    double weight;
//    char kOrl;
//    double result;
//
//    puts("Enter weight: ");
//    scanf("%lf%*c", &weight);
//
//    puts("Enter 'k' for kilos or 'l' for pounds:");
//    kOrl = getchar();
//    if (kOrl == 'k') {
//        result = weight / 2.2;
//        printf("%lf\n", result);
//    }
//
//    else {
//        result = weight * 2.2;
//        printf("%lf\n", result);
//    }
    
    char scale;
    double amount;

    puts("weight amount?");
    scanf("%lf%*c", &amount);

    puts("kilos  or lbs? ('k'/'l')");
    scale = getchar();

    if (scale == 'k')
        printf("%lf kilos is %lf pounds\n", amount, amount/2.2);
    else
        printf("%lf pounds is %lf kilos\n", amount, amount*2.2);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
