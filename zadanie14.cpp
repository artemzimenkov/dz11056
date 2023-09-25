#include <iostream>
#include "Easy.h"

using namespace std;

int itc_str(int a, int b, int c){
    double p;
    if (a + b > c && a + c > b && b + c > a ){
        p = (a + b + c) / 2.0;
    }
    else if (a <= 0 || b <= 0 || c <= 0){
        return -1;
    }
    else {
        return -1;
    }
return itc_sqrt((int)p * (p - a) * (p - b) * (p - c));
}
