//
//  main.c
//  secondmain
//
//  Created by Taehong on 2021-02-09.
//

#include <stdio.h>

//void ourClass (char className[], char student1[], char student2[]);
void petDisplay (char petName[], char ssdepe[], char sdcolor[], int sdage, double sdweight);
char * fullName (char fname[], char lname[]);


int main (int ac, char **av) {
//    char s1[] = "Jone";
//    char s2[] = "Mary";
//    char s3[] = "Henry";
//    char s4[] = "Sally";
//
//    printf("Our class contains %s and %s\n", s1, s2);
//
//    ourClass ("PROG2007", s1, s2);
//    ourClass ("Database", s3, s4);

    char petName[40];
    char petSepecies[20];
    char petColor[20];
    int petAge;
    double petWeight;
    
    printf("pet Name: "); scanf("%s", petName);
    printf("pet Sepecies: "); scanf("%s", petSepecies);
    printf("pet Color: "); scanf("%s", petColor);
    printf("pet Age: "); scanf("%d", &petAge);
    printf("pet Weight: "); scanf("%lf", &petWeight);
    
    petDisplay (petName, petSepecies, petColor, petAge, petWeight);
}

//void ourClass (char className[], char student1[], char student2[]){
//       printf("Classs [%s] contains [%s] and [%s]\n", className, student1, student2);
//}

void petDisplay (char petName[], char spec[], char color[], int age, double weight){
    printf("%s is a %s who is %s and %d and weight %.2lf kgs\n", petName, spec, color, age, weight);
}












