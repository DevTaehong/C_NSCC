//
//  main.c
//  assignment3(0401)
//
//  Created by Taehong on 2021-04-01.

//the "sound" function should have a return type of pointer to char - i.e. char *

#include <stdio.h>
#include <string.h>

char *sound(char animal[]){
    if (strcmp(animal,"cow")==0) {
        return "moo";
    }
    else if (strcmp(animal, "duck")==0) {
        return "quack";
    }
    else if (strcmp(animal, "sheep")==0) {
        return "baa";
    }
    else if (strcmp(animal, "cat")==0) {
        return "meow";
    }
    else if (strcmp(animal, "dog")==0) {
        return "woof";
    }
    else if (strcmp(animal, "horse")==0) {
        return "neigh";
    }
    else if (strcmp(animal, "pig")==0) {
        return "oink";
    }
    else if (strcmp(animal, "chicken")==0) {
        return "cluck";
    }
    else if (strcmp(animal, "lion")==0) {
        return "roar";
    }
    else if (strcmp(animal, "frog")==0) {
        return "ribbit";
    }
    else if (strcmp(animal, "fox")==0) {
        return "bark";
    }
    else return "???";
}

int main(int argc, const char * argv[]) {
    char animal[10][10];

    for (int i=0; i<10; ++i) {
        printf("What animal is loaded in truck position %d? ", i+1);
        scanf( "%s", animal[i]);
        
        printf("\nTruck psition %d has a %s.\n\n", i+1, animal[i]);
    }
    
    
    for (int i=0; i<10; ++i) {
        printf("%s says '%s'\n\n", animal[i], sound(animal[i]));

    }
    
    printf("Truck says '%s-%s-%s-%s-%s-%s-%s-%s-%s-%s'\n", sound(animal[0]), sound(animal[1]), sound(animal[2]), sound(animal[3]), sound(animal[4]), sound(animal[5]), sound(animal[6]), sound(animal[7]), sound(animal[8]), sound(animal[9]));
    
    
    
    
    
    
}
