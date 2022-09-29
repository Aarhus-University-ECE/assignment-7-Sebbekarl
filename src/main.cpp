extern "C"
{
#include "stack.h"
#include "taylor_sine.h"
}


// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    printf("%f", taylor_sine(3.1415, 3));
    return 0;
}