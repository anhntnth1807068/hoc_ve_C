#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char city[50];
    char district[50];
} address;
typedef struct {
    int pig_id;
    char pig_name[50];
    int pig_age;
    int pig_weight;
    address address;
}piggy;
int main(){
    piggy mypig;
    mypig.pig_id =1;
    strcpy(mypig.pig_name, "lua t");
    mypig.pig_age =10;
    mypig.pig_weight=30;
    strcpy(mypig.address.city,"thai boinh");
    strcpy(mypig.address.district,"thai xuyen");
    printf("ma lonla:%d\n",mypig.pig_id);
    printf("ten lonla:%d\n",mypig.pig_name);
    printf("tuoi lonla:%d\n",mypig.pig_age);
    printf("can lonla:%d\n",mypig.pig_weight);
    printf("thanhpho lonla:%s\n",mypig.address.city);
    printf("huynlonla:%s\n",mypig.address.district);
    return 0;
}