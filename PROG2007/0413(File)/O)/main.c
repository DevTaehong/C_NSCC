//
//  main.c
//  O)
//
//  Created by Taehong on 2021-04-13.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    FILE *fp;
//
//    fp = fopen("/Users/taehong/Downloads/PROG2007/0413(File)/tmp/data.txt", "w");
//    fputs("Your first name is Taehong.\n", fp);
//    fputs("Your last name is Min.\n", fp);
//    fputs("Your phone number is 782-234-7489 ", fp);
//    fclose(fp);
    
    char name[40], another_name[40];
    
    printf("Your name: ");
    scanf("%s", name);
    
    FILE *fp;
    
    fp= fopen("/Users/taehong/Downloads/PROG2007/0413(File)/tmp/name.txt", "w"); //Only writing
    if (fp != NULL) {// checking if fp is open.
        fprintf(fp, "%s\n", name);
        fclose(fp);
    }
    else{
        printf("Couldn't open file\n");
    }
    
    fp = fopen ("/Users/taehong/Downloads/PROG2007/0413(File)/tmp/name.txt", "r");
    
    if (fp != NULL) {
        fscanf(fp, "%s", another_name);
        printf("File contains [%s]\n", another_name);
    }
    else{
        printf("Couldn't open file\n");
    }
    
    
    
    
    return 0;
}
