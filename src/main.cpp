extern "C"
{
#include "stack.h"
#include "taylor_sine.h"
}
#include<math.h>

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    /*
    the first for loop goes through number close to zero and is therefore very precise with only 8 terms
    when we then go to larger numbers we can see the test diverge quite a bit from the correct result
    when we then add 30 terms instead it's more precise at higher values

    we could use the fact that the function is harmonic to just introduce a modulo in the taylor_sine 
    which would fix lack of precision at higher values 
    */
    for(double i = -3.14; i < 3.14; i += 1){
        printf("sin(%g) ::: diff: %lf\n",i,abs(taylor_sine(i,8)-sin(i)));
    }
    puts("\n");
    for(double i = -31.41; i < 31.41; i += 10){
        printf("sin(%g) ::: diff: %lf\n",i,abs(taylor_sine(i,8)-sin(i)));
    }
    puts("\n");
    for(double i = -31.41; i < 31.41; i += 10){
        printf("sin(%g) ::: diff: %lf\n",i,abs(taylor_sine(i,30)-sin(i)));
    }
    return 0;
}