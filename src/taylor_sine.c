#include "taylor_sine.h"
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

double factorial(double num){
    double res = 1;
    for(int i = 1; i<num+1; i++){
        res *= i;
    }
    return res;
}

bool check_pre(double num,double num2, int n){
    double pre = pow(10, -n);

    printf("%f", fabs(num-num2));

    if(fabs(num-num2) > pre){
        return true;
        printf("true");
    }else{
        return false;
    }


}

double taylor_sine(double x, int n)
{
    double result = x;
    double oldres = 0;
    //printf("%lf test", result);

    for(int i; !check_pre(result,oldres,n); i++){
        
        oldres = result;
        result += (pow(x,2*i+1)/factorial(2*i+1));
        //printf("%lf",result);

    }

    
    return result;
}
