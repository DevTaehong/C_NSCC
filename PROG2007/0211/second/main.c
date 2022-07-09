#include <stdio.h>
#define SIZE 10
double avg (double dataset[]) {
    double result = 0.0;
    
    int itemCount = sizeof(dataset)/sizeof(double);

    for (int i=0; i<itemCount; ++i) {
        result += dataset[i];
    }
    result /= itemCount;
    return (result);
}

int main(int ac, char **av) {
    // storage for 1 number
    double data;

    // storage for 10 numbers
    double item[SIZE];

    int itemSize = sizeof(item);
    int itemCount = sizeof(item)/sizeof(item[0]);
    
    printf("size=%d\n", itemSize);
    printf("count=%d\n", itemCount);

    for (int i=0; i<itemCount; ++i) {
        printf("Item %d: ", i+1);
        scanf("%lf", &item[i]);
    }

    data = avg (item);

    printf("The average is: %.2lf\n", data);
}
