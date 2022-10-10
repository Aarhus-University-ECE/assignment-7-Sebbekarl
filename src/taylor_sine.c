#include "taylor_sine.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

double factorial(double num)
{

    double res = 1;
    for (int i = 1; i < num + 1; i++)
    {
        res *= i;
    }
    return res;
}

bool check_pre(double num, double num2, int n)
{
    double pre = pow(10, -n);

    if (fabs(num - num2) > pre)
    {
        return true;
    }
    else
    {
        return false;
    }
}

double taylor_sine(double x, int n)
{
    double result = x;
    double oldres = 0;

    for (int i = 1; check_pre(result, oldres, n); i++)
    {
        oldres = result;
        if (i % 2 == 1)
            result -= (pow(x, 2 * i + 1) / factorial(2 * i + 1));
        if (i % 2 == 0)
            result += (pow(x, 2 * i + 1) / factorial(2 * i + 1));
    }
    return result;
}
