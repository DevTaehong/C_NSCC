//
//  main.c
//  0408
//
//  Created by Taehong on 2021-04-08.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pet {
    char Name[40];
    char Species[20];
    char Color[20];
    int Age;
    double Weight;
};

void petDisplay (struct Pet pet){
    printf ("%s is a %s who is %s and %d and weighs %.2lf kgs\n",
        pet.Name, pet.Species, pet.Color, pet.Age, pet.Weight);
}

int main(int argc, const char * argv[])
{
    //Change the pet.c to use a structure for Pet, then create a pet to display.

    struct Pet pet1 ={"Alfie", "feline", "tabby", 1, 2.5};
    struct Pet pet2 ={"Barnie", "feline", "tabby", 1, 2.2};
    
    struct Pet herd[3] = {
        {"Alfie", "feline", "tabby", 1, 2.5},
        {"Barnie", "feline", "tabby", 1, 2.2},
        {"Charlie", "feline", "orange", 1, 3.5}
    };
    
    struct Pet *coral;
    // find out how many pets there are.
    int numberofpets=30;
    coral = (struct Pet *) malloc(sizeof(struct Pet) * numberofpets); //int* pArr = (int *)malloc(sizeof(int) * 4);
                                                                    //(int *) = malloc의 반환형이 void* 이므로 (int *)형태로 형변환을 해달라고 한 것 입니다.
                                                                    //sizeof(int) = sizeof( )는 괄호 안에 자료형 타입을 바이트로 연산해주는 연산자 입니다.
                                                                    //sizeof(int) * 4 = 곱하기 4를 해준 이유는 위에 선언한 arr[4]사이즈가 가지고 있는 동일한 크기의 메모리를 할당하기 위해서 int 타입 * 4를 해준 것 입니다.
    

    
    
    
    
//    printf ("pet Name: "); scanf("%s", pet1.Name);
//    printf ("pet Species: "); scanf("%s", pet1.Species);
//    printf ("pet Color: "); scanf("%s", pet1.Color);
//    printf ("pet Age: "); scanf("%d", &pet1.Age);
//    printf ("pet Weight: "); scanf("%lf", &pet1.Weight);
    
//    petDisplay(pet1);
//    petDisplay(pet2);
    
    for (int i=0; i<3; ++i) {
        petDisplay(herd[i]);
    }
    
    return 0;
}


