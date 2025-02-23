#include <stdio.h>
#include <inttypes.h> // Include this header for PRIu64
#include <limits.h>

#include "memoize.h"


long long unsigned int fibbonaci(int number){
    long long unsigned int term1 = 0;
    long long unsigned int term2 = 1;
    long long unsigned int nextTerm = 1;
    for(int i = 2; i < number; i++){
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
    }
    return nextTerm;
}

void test_memo(int memotest){
    printf("Fibbonaci term %d is %llu\n", memotest, memoized_fibonacci(memotest));
    printf("Fibbonaci term %d is %llu\n", memotest, memoized_fibonacci(memotest));
}

int main(){

    initalize_memo();
    provider_func = fibbonaci;
    test_memo(90);
    test_memo(30);
    test_memo(60);



    return 0;
}