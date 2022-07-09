//
//  main.c
//  0330
//
//  Created by Taehong on 2021-03-30.
//

#include <stdio.h>
#include <string.h>

struct Address {
    char province[50];
    int unit;
    char street[50];
    char city[50];
    char postal[50];
    char country[50];
};

struct Date {
    int year;
    int month;
    int date;
};

void printaddress(struct Address *address);

int main(int argc, const char * argv[]) {
    // insert code here...
    //Create a C program that uses a struct to define an address: unit#, street name, City, Postal Code, Country. Then, in the main,
    //create two address variables. Give them values and then print the addresses out.
    struct Address home = {"NS", 39, "Chadwick", "Dartmouth", "B2Y 2M2", "Canada"};
    
    struct Address hood[50] = {
        {"NS", 39, "Chadwick", "Dartmouth", "B2Y 2M2", "Canada"},
        {"NS", 40, "Chadwick", "Dartmouth", "B2Y 2M2", "Canada"},
        {"NS", 41, "Chadwick", "Dartmouth", "B2Y 2M2", "Canada"}
    };
    
    struct Address *house; // A Good way to refernecr to ...?
    hood[0].unit = 1;
    
    house = hood; //처음 후드가 값
    house = &(hood[0]); //값을 정할 수 있음
    
    (*house).unit = 2;  // Same with house->num = 2;
    
    for (int i=0; i<50; ++i) {
        strcpy(house->postal, "B2B 9K2");
        ++house;
    }
    
    
//    for (int i=0; i<50; ++i) {
//        hood[i].unit = i+1;
//        strcpy(hood[i].street, "Main");
//    }
    
    house = &hood[7];
    
    strcpy((*house).postal, "B2B 2M2");
    strcpy(house->postal, "B2B 2M2");
    
    struct Address Address1;
    struct Address Address2;
    struct Date Date;
    
    
    strcpy(Address1.city, "Dartmouth");
    strcpy(Address1.country, "Canada");
    strcpy(Address1.postal, "B2Y 2M2");
    strcpy(Address1.province, "Nova Scotia");
    strcpy(Address1.street, "Chadwick");
    Address1.unit = 39;
    
    strcpy(Address2.city, "Halifax");
    strcpy(Address2.country, "Canada");
    strcpy(Address2.postal, "A2Y 1K7");
    strcpy(Address2.province, "Nova Scotia");
    strcpy(Address2.street, "Quinpool");
    Address2.unit = 12;
    
    Date.date = 30;
    Date.month = 3;
    Date.year = 2021;
    
    printf("%d/%d/%d\n", Date.month, Date.date, Date.year);
    
    printf( "Address 1 city : %s\n", Address1.city);
    printf( "Address 1 country : %s\n", Address1.country);
    printf( "Address 1 postal : %s\n", Address1.postal);
    printf( "Address 1 province : %s\n", Address1.province);
    printf( "Address 1 street : %s\n", Address1.street);
    printf( "Address 1 unit : %d\n\n", Address1.unit);
    
    printf( "Address 2 city : %s\n", Address2.city);
    printf( "Address 2 country : %s\n", Address2.country);
    printf( "Address 2 postal : %s\n", Address2.postal);
    printf( "Address 2 province : %s\n", Address2.province);
    printf( "Address 2 street : %s\n", Address2.street);
    printf( "Address 2 unit : %d\n\n", Address2.unit);
    
    printaddress(&Address1);
    printaddress(&Address2);
    
    return 0;
}

void printaddress(struct Address *address){
    printf("Address city : %s\n", address->city);
    printf("Address country : %s\n", address->country);
    printf("Address postal : %s\n", address->postal);
    printf("Address province : %s\n", address->province);
    printf("Address street : %s\n", address->street);
    printf("Address unit : %d\n\n", address->unit);
}
