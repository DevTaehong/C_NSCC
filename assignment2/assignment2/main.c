//
//  main.c
//  assignment2
//
//  Created by Taehong on 2021-03-25.
//

#include <stdio.h>

double converting(double *hours, double *minutes, double *seconds){

    double hours2 = *hours;
    *minutes= (*hours - (int)*hours) * 60;
    *hours = (int)*hours;
    *seconds= (*minutes - (int)*minutes) * 60;
    return hours2;
}

int main(int argc, const char * argv[]) {
    
    double hours=6.37, minutes=0, seconds=0;

    double decimal = converting(&hours, &minutes, &seconds);
    printf("A decimal hours value %.2lf is %d hours %d minutes %.0lf seconds.\n", decimal, (int)hours, (int)minutes, seconds);
    
    
}
