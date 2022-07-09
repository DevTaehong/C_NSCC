
//  main.c
//  Assignment1
//
//  Created by Taehong on 2021-01-28.
//

#include <stdio.h>

int main(int ac, char **av){
    
    for (int i=1; i<=26; i++) {
        if (i==1||i==26)printf("+");
        else printf("-");
    }
    printf("\n");

    for (int row=1; row<=12; ++row){
        for (int col=1; col<=26; ++col)
        {
            if (col==1||col==26) printf("|");
            else printf("#");
        }
        printf("\n");
    }
    
    for (int i=1; i<=26; i++) {
        if (i==1||i==26) printf("+");
        else printf("-");
    }
    printf("\n");
    
}
