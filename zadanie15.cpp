#include <iostream>
#include "Easy.h"

using namespace std;

double itc_scir(int radius){
    double s;
    if (radius > 0) {
        s = 3.14 * (radius * radius);
        return s;
    }
    else
        return -1;
}
