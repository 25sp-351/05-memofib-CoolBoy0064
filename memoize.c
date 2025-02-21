#include <stdio.h>

#include "fib.h"
#define CACHE_SIZE 50
const unsigned long long int EMPTY = 0;

unsigned long long int memo[CACHE_SIZE];

void initalize_memo(){
    for(int i = 0; i < CACHE_SIZE; i++){
        memo[i] = EMPTY;
    }

}

unsigned long long int check_memo(int key){
    if(key >= CACHE_SIZE){
        return 0;
    }
    if(memo[key] != EMPTY){
        return memo[key];
    }
    return 0;
}

void add_to_memo(unsigned long long int value, int key){
    if(key >= CACHE_SIZE){
        return;
    }
    memo[key] = value;
}

unsigned long long int memoized_fibonacci(int input){
    unsigned long long int check = check_memo(input);
    if(check != 0){
        printf("Cache hit\n");
        return check;
    }
    check = fibbonaci(input);
    add_to_memo(check, input);
    return check;
}