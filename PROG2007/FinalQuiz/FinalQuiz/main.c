//
//  main.c
//  FinalQuiz
//
//  Created by Taehong on 2021-04-20.
//

#include <stdio.h>

struct Airport {
    double Latitude;
    double Longitude;
    int Altitude;
    char City[16];
    char Code[20];
};

void displayAirport(struct Airport *airport){
    printf("%-17s %-4s %-4.5lf %-9.4lf %d\n", airport->City, airport->Code, airport->Latitude, airport->Longitude, airport->Altitude);
}

int main(int argc, const char * argv[]) {
//    struct Airport airports[16];
//
//    FILE *fp;
//    fp = fopen("airports.dat", "r");
//
//    if (fp !=NULL) {
//        for (int i=0; i<16; ++i) {
//            fscanf(fp,"%lf %lf %d %s %s", &airports[i].Latitude, &airports[i].Longitude, &airports[i].Altitude, airports[i].City, airports[i].Code);
//        }
//    }
//
//
//    printf("City              Code Latitude Longitude Altitude\n");
//
//    int count=0;
//
//    do {
//        displayAirport(&airports[count]);
//        count += 1;
//    } while (count<16);
//
//    fclose(fp);
    int a = (4*243.5)+(4*137.5)+(9*55.5);
    printf("%d\n", a);
    
   
}
