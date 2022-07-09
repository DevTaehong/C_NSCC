//
//  main.c
//  InClassAssginment
//
//  Created by Taehong on 2021-02-18.
//

#include <stdio.h>

double ftoc(double temp){
    double c;
    c = (temp-32) * 5/9;
    return c;
}

double ctof(double temp){
    double f;
    f = (temp * 9/5) + 32;
    return f;
}


int main(int argc, const char * argv[]) {
    
    double temp;
    char conversion = '\0';
    double f;
    double c;
    
    do{
        printf("Temperature value? "); scanf("%lf", &temp);
        
        if(temp!=0){
            printf("Celsius or Fahrenheit? "); getchar(); scanf("%c", &conversion);
        }
        
        if ('c' == conversion) {
            f = ctof(temp);
            printf("%.2lf Celsius is %.2lf Fahrenheit\n\n", temp, f);
        }

        else if(temp>0){
            c = ftoc(temp);
            printf("%.2lf Fahrenheit is %.2lf Celsius\n\n", temp, c);
        }
        
        else {
            printf("Done.\n");
        }
    } while (temp!=0);
    
    
   
    
   
    
    
    
    
    
    
    
    
    
}
