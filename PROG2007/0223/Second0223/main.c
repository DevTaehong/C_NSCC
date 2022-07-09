//
//  main.c
//  Second0223
//
//  Created by Taehong on 2021-02-23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char *fruit[3] = {"apples", "bananas", "cherries"};
    char *fav;
    
    printf("Our fruit basket has:\n");
//    for (int i=0; i<3; ++i) {
//        fav = fruit[i];
//        printf("%s\n", fav);
//    }
    
    int i=0;
    for (fav = fruit[0]; i<3; ++i, fav=fruit[i]) {
        printf("%s\n", fav);
    }
   
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
