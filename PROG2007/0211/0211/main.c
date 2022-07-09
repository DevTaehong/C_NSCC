//
//  main.c
//  0211
//
//  Created by Taehong on 2021-02-11.
//

#include <stdio.h>

char * fullName (char fname[], char lname[]) {
    char result[80];
    
    sprintf (result, "%s %s", fname, lname);
    
    return (result);
}
void ourClass (char className[], char student1[], char student2[]);



int main (int ac, char **av) {
    char s1[] = "Jone";
    char s2[] = "Mary";
    char s3[] = "Henry";
    char s4[] = "Sally";

    printf("Our class contains %s and %s\n", s1, s2);

    ourClass ("PROG2007", s1, s2);
    ourClass ("Database", s3, s4);
    
    printf("Full name: %s\n", fullName(s3, s4));
}

void ourClass (char className[], char student1[], char student2[]){
       printf("Classs [%s] contains [%s] and [%s]\n", className, student1, student2);
}


