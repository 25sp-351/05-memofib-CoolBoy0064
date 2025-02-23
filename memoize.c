#include <stdio.h>

#include "fib.h"
#define CACHE_SIZE 90
const unsigned long long int EMPTY = 0;

unsigned long long int memo[CACHE_SIZE];
unsigned long long int (*provider_func)(int);

void initalize_memo(){
    for(int i = 0; i < CACHE_SIZE; i++){
        memo[i] = EMPTY;
    }

}

unsigned long long int check_memo(int key){
    if(key > CACHE_SIZE){
        return 0;
    }
    if(memo[key] != EMPTY){
        return memo[key];
    }
    return 0;
}

void add_to_memo(unsigned long long int value, int key){
    if(key > CACHE_SIZE){
        return;
    }
    memo[key] = value;
}

long long unsigned int memoized_fibonacci(int input){
    printf("Calculating fibbonaci of %d\n", input);
    long long unsigned int check = check_memo(input);
    if(check != 0){
        printf("Cache hit\n");
        return check;
    }
    check = (*provider_func)(input);
    add_to_memo(check, input);
    return check;
}