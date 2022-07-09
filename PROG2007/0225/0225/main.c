//
//  main.c
//  0225
//
//  Created by Taehong on 2021-02-25.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //// Shopping cart.
    // Enter the item being bought, the unit cost, and the amount being purchased.
    // You collect 10 different items.
    // Print the reciept: each line contains item, the number of units, the cost per unit and the total cost for items.
    // at the end of the shopping list display the total.

    // Item 1: bread   x 3  @$3.00ea  $9.00
    // Item 2: eggs    x 1  @$2.50ea  $2.50
    
    char items[10][40];
    double cost[10];
    int amount[10];
    double total = 0.0;
    
    for (int i=0; i<10; ++i) {
        printf("Enter item %d: ", i+1);
        scanf( "%s", items[i]);
        printf("Enter the unit cost: ");
        scanf( "%lf", &cost[i]);
        printf("How many would like to puschase? ");
        scanf( "%d", &amount[i]);
    }
    
    printf("\n");
    for (int i=0; i<10; ++i) {
        int x = amount[i];
        double y = cost[i];
        
        printf("Item #%02d: %s x %d @$%.2lfea $%.2lf\n", i+1, items[i], amount[i], cost[i], (cost[i] * amount[i]));
        total += (x * y);
        
        if (i==9) {
            printf("\nThe total is: $%.2lf\n", total);
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
