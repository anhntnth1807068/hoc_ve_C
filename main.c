
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct pig{
    int pig_id;
    char pig_name[50];
    int pig_age;
    int pig_weight;
};

int main() {
    struct pig mypig;
    mypig.pig_id = 1;
    strcpy(mypig.pig_name, "lon nai");
    mypig.pig_age = 10;
    mypig.pig_weight = 30;
    printf("ma lonla:%d\n", mypig.pig_id);
    printf("ten lonla:%s\n", mypig.pig_name);
    printf("tuoi lonla:%d\n", mypig.pig_age);
    printf("can lonla:%d\n", mypig.pig_weight);
    return 0;
}