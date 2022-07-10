//
//  main.c
//  Assignment4(0413)
//
//  Created by Taehong on 2021-04-11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    int edition;
    char author[100];
    char isbn[80];
    char publisher[90];
    int year;
};

void Clear (struct Book *book){
    strcpy(book->title, "");
    book->edition = 0;
    strcpy(book->author, "");
    strcpy(book->isbn, "");
    strcpy(book->publisher, "");
    book->year = 0;
}

int main(int argc, const char * argv[]) {

    struct Book shelf[50];
    char another = '\0';
    int num = 1;

    for (int i=0; i<50; ++i) {
        Clear(&shelf[i]);
        printf("Book %d\n", i+1);
        printf("Title: "); scanf("%s", shelf[i].title);
        printf("Edition: "); scanf("%d", &shelf[i].edition);
        printf("Author: "); scanf("%s", shelf[i].author);
        printf("ISBN: "); scanf("%s", shelf[i].isbn);
        printf("Publisher: "); scanf("%s", shelf[i].publisher);
        printf("Year: "); scanf("%d", &shelf[i].year);
        printf("Another? (Y/N): "); getchar(); scanf("%c", &another);
        if (another == 'N') {
            break;
        }
        else ++num;
    }
    
    for (int i=0; i < num; ++i) {
        printf("The title of book %d is %s\n", i+1, shelf[i].title);
    }
    
}
    
   


