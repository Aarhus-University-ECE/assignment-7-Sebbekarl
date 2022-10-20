#include "taylor_sine.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

double factorial(double num)
{
    double res = 1;
    // loops through all numbers between 1 and num multiplying them together resulting in the factorial of num
    for (int i = 1; i < num + 1; i++)
    {
        res *= i;
    }
    return res;
}


double taylor_sine(double x, int n)
{
    double result = x;
    // loops through the specified terms and calculates their value and then adding and subtracting them
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
            result -= (pow(x, 2 * i + 1) / factorial(2 * i + 1));
        if (i % 2 == 0)
            result += (pow(x, 2 * i + 1) / factorial(2 * i + 1));
    }
    
    return result;
}
