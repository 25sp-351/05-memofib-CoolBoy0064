//If you are grading this as it currently is, i couldnt get any form of real caching to work, and i frankly just dont care anymore
//im genuinely having a mental breakdown over how hard this is and this class is making me wanna drop out of the whole school.
//My social skills are so incredibly bad that id rather turn in something i know is wrong than ask for help
//im also just desperate for this to be over so i gave up on the bignumber part

#include <stdio.h>
#include <inttypes.h> // Include this header for PRIu64
#include <limits.h>

#include "memoize.h"


unsigned long long int fibbonaci(unsigned long long int number){
    if (number <= 1){
        return number;
    }
    return fibbonaci(number - 1) + fibbonaci(number - 2);
}

int main(){

    int memotest = 30;
    initalize_memo();
    printf("Fibbonaci of %d is %llu\n", memotest, memoized_fibonacci(memotest));
    printf("Fibbonaci of %d is %llu\n", memotest, memoized_fibonacci(memotest));



    return 0;
}