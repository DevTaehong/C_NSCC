//
//  main.c
//  0415(File2)
//
//  Created by Taehong on 2021-04-15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char name[50], newname[50];
    int age, newage;
    double shoesize, newshoe;
    FILE *fp;
    
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("ShoeSize: ");
    scanf("%lf", &shoesize);
    
    fp = fopen("/Users/taehong/Downloads/PROG2007/0415(File2)/aboutme.txt", "w");
    fprintf(fp, "%s %d %.1f", name, age, shoesize);
    printf("%s %d %.1f\n", name, age, shoesize);
    fclose(fp);
    
    fp = fopen("/Users/taehong/Downloads/PROG2007/0415(File2)/aboutme.txt", "r");
    fscanf(fp,"%s %d %lf", newname, &newage, &newshoe);
    printf("%s %d %.1f\n", newname, newage, newshoe);
    
    
    fclose(fp);
}
