#include <iostream>
#include "Easy.h"

using namespace std;

double itc_pow(int num, int step){
    int mod_step, res = 1;
    double a;
    mod_step = itc_abs(step);
    for(int i = 0; i < mod_step; i++){
    res *= num;
    }
    if (step >= 0){
        return res;
    }
    else if (step < 0) {
        return 1.0 / res;
    }
}
