#include <iostream>
#include "Easy.h"

using namespace std;

double itc_fmin(double num, double num2){
    if (num >= num2)
        return num2;
    else
        return num;
}
